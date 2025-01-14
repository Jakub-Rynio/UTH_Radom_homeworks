import time
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

def fibonacci_iterative(n):
    start_time = time.time()
    a, b = 0, 1
    for _ in range(n):
        print(a)
        a, b = b, a + b
    end_time = time.time()  
    print(f"\nCzas wykonania (iteracyjnie): {end_time - start_time} sekundy")

while True:
    liczba_wyrazow = get_number("Podaj dlugosc ciagu: ", "int", True, False)
    fibonacci_iterative(liczba_wyrazow)
    input()
    os.system("cls")
    
