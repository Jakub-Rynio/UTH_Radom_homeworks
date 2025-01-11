import math

numerator = int(input("Podaj licznik> "))
denominator = int(input("Podaj mianownik> "))

if numerator >= denominator or numerator <= 0 or denominator <= 0:
    if numerator < denominator or numerator >= 0 or denominator >= 0:
        print("Nieprawidłowe dane wejściowe")
        exit()

def rozklad(numerator, denominator):

    arr = []
    
    while numerator != 0:
        x = math.ceil(denominator / numerator)
        arr.append(x)
        numerator = numerator * x - denominator
        denominator = denominator * x

    return arr

res = rozklad(numerator, denominator)

print("{0}/{1} rozklad na ulamki egipskie to:".format(numerator, denominator))
print(" + ".join(f"1/{i}" for i in res))

