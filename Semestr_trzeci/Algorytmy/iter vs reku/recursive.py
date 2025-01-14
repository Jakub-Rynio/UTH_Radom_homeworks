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
def fibonacci_recursive(n, a=0, b=1):
    start_time = time.time() 
    if n <= 0:
        return
    print(a)
    fibonacci_recursive(n - 1, b, a + b)
    end_time = time.time() 
    if n == 10:  
        print(f"\nCzas wykonania (rekurencyjnie): {end_time - start_time} sekundy")

while True:
    liczba_wyrazow = get_number("Podaj dlugosc ciagu: ", "int", True, False)
    fibonacci_recursive(liczba_wyrazow)
    input()
    os.system("cls")