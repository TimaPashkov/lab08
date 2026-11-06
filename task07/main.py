numbers = [int(t) for t in input().split()]

for x in numbers:
    if x < 0:
        print("Найдено отрицательное число:", x)
        break
else:
    print("Отрицательных чисел нет")