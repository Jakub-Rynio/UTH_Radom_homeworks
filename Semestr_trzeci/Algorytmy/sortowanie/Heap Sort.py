import random
import time
import os
while True:

    def heapify(arr, n, i):
        largest = i  
        l = 2 * i + 1  
        r = 2 * i + 2

        if l < n and arr[i] < arr[l]:
            largest = l

        if r < n and arr[largest] < arr[r]:
            largest = r

        if largest != i:
            arr[i], arr[largest] = arr[largest], arr[i]  # swap

            heapify(arr, n, largest)

    def heapSort(arr):
        n = len(arr)

        for i in range(n // 2, -1, -1):
            heapify(arr, n, i)

        for i in range(n - 1, 0, -1):
            arr[i], arr[0] = arr[0], arr[i]  # swap
            heapify(arr, i, 0)

    def generate_random_array(size, lower_bound=1, upper_bound=1000):
        return [random.randint(lower_bound, upper_bound) for _ in range(size)]

    size = int(input("Podaj wielkość tablicy: "))

    arr = generate_random_array(size)

    print("Tablica przed posortowaniem:")
    print(arr)

    start_time = time.time()
    heapSort(arr)

    end_time = time.time()

    print("\nPosortowana tablica:")
    print(arr)

    print("\nCzas wykonania algorytmu: {:.6f} sekund".format(end_time - start_time))


    input()
    os.system("cls")