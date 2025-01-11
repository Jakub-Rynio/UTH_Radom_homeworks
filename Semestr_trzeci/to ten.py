import os

def error():
    print("Nieprawidlowe dane wejsciowe")
    input()
    os.system("cls")

def get_number(prompt, return_type="float", only_poz = False, zero = True):
    while True:
        try:
            if return_type == "float":
                output = float(input(prompt))

            elif return_type == "int":
                output = int(input(prompt))
        except ValueError:
            error()
            continue

        if output < 0 and only_poz or output == 0 and zero == False:
            error()
            continue
        else:
            return output

def greedy(values, weights, names, capacity):
    # Oblicza stosunek wartości do wagi i sortuje w kolejności malejącej
    items = sorted(enumerate(zip(values, weights, names)), key=lambda x: x[1][0] / x[1][1], reverse=True)
    
    totalValue = 0 
    selectedItems = {} 
    remainingCapacity = capacity 

    for i, (value, weight, name) in items: 
        if weight <= remainingCapacity: 
            if name not in selectedItems:
                selectedItems[name] = 0
            selectedItems[name] += 1
            totalValue += value 
            remainingCapacity -= weight 
    
    return totalValue, selectedItems

capacity = get_number("Podaj maksymalna pojemnosc plecaka: ", "float", True, False)
items_number = get_number("Podaj ilosc przedmiotow: ", "int", True, False)

values, weights, count, names = [], [], [], []
weight_for_print, value_for_print, name_for_print, count_for_print = [], [],[], []

for i in range(items_number):
    print(f"Przedmiot {i + 1} z {items_number}: \n")

    while True:
        name = str(input("Podaj nazwe przedmiotu: "))
        if name in names:
            print("Ten przedmiot juz zostal dodany, nie mozna go dodac ponownie!")
            input()
            os.system("cls")
            continue
        else: break

    weight = get_number(f"Podaj wage przedmiotu {name}: ", "float", True, False)
    value = get_number(f"Podaj wartosc przedmiotu {name}: ", "float", True, True)
    count_value = get_number(f"Podaj ilosc przedmiotu {name}: ", "int", True, False)

    weight_for_print.append(weight)
    value_for_print.append(value)
    name_for_print.append(name)
    count_for_print.append(count_value)

    for j in range(count_value):
        weights.append(weight)
        values.append(value)
        names.append(name)
        count.append(count_value)

input()
os.system("cls")

odstep = 10
print(f"{'Nazwa':<{odstep}}{'Waga':<{odstep}}{'Wartosc':<{odstep}}{'Ilosc':<{odstep}}")
print(40 * "-")

for i in range(items_number):
    print(f"{name_for_print[i]:<{odstep}}{weight_for_print[i]:<{odstep}}{value_for_print[i]:<{odstep}}{count_for_print[i]:<{odstep}}")
    print(40 * "-")

maxValue, selectedItems = greedy(values, weights, names, capacity)

print("\n\nMaksymalna wartość:", maxValue)
print("\nWybrane przedmioty:")
for name, count in selectedItems.items():
    print(f"  Przedmiot {name}: {count} szt.")
input()