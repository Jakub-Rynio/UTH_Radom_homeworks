from fractions import Fraction

def farey_sequence(n):
    farey = []
    
    for denominator in range(1, n + 1):
        for numerator in range(0, denominator + 1):
                farey.append(Fraction(numerator, denominator))
    
    farey = sorted(set(farey))  
    return farey

def get_positive_int(prompt):

    while True:
        try:

            n = int(input(prompt))

            if n <= 0:
                print("Podana liczba ma byc wieksza od 0")
                continue
            else:
                return n
            
        except ValueError:
            print("Podana liczba musi byc calkowita")


sequence = farey_sequence(get_positive_int("Podaj rzad, ktory chcesz wygenerowac: "))
print("  ".join(str(i) for i in sequence))