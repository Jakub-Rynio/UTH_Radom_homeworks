import random
import time
import os
while True:

    def insertionSort(arr):
        n = len(arr)
        if n <= 1:
            return
        for i in range(1, n):
            key = arr[i]
            j = i - 1
            while j >= 0 and key < arr[j]:
                arr[j + 1] = arr[j]
                j -= 1
            arr[j + 1] = key

    array_size = int(input("Podaj rozmiar tablicy: "))

    arr = [random.randint(0, 1000) for _ in range(array_size)]

    print("Tablica przed posortowaniem: ")
    print(arr)

    start_time = time.time()
    insertionSort(arr)
    end_time = time.time()

    print("\n\nTablica po posortowaniu: ")
    print(arr)

    print(f"Czas wykonania: {end_time - start_time:.6f} sekund")
    input()
    os.system("cls")