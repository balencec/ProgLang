### Задача 1 – Kisa and Osya was here
```python
name1 = input()
name2 = input()
print(name1, "and", name2, "was here")
```

### Задача 2 – Три плюс два
```python
first = input().split()
second = input().split()
print(first[0], second[0], first[1], second[1], first[2], sep=',')
```

### Задача 3 – Работа по письму
```python
w1, n1 = input().split()
w2, n2 = input().split()
w3, n3 = input().split()
total = len(w1) * int(n1) + len(w2) * int(n2) + len(w3) * int(n3)
print(total)
```

### Задача 4 – Строка в рамке
```python
s = input()
border = '*' * (len(s) + 4)
print(border)
print('*', s, '*')
print(border)
```

### Задача 5 – Время на дистанции
```python
h1, m1, s1 = input().split()
h2, m2, s2 = input().split()
start = int(h1) * 3600 + int(m1) * 60 + int(s1)
finish = int(h2) * 3600 + int(m2) * 60 + int(s2)
print(finish - start)
```

### Задача 6 – Обратный отсчёт
```python
n = int(input())
if n == 1:
    print('pusk')
else:
    print(n - 1)
```

### Задача 7 – Дырка
```python
a, b, c = map(int, input().split())
if a == 3 and b == 3 and c == 3:
    print('hole')
else:
    print(a + b + c)
```

### Задача 8 – Самое длинное слово
```python
a, b, c = input().split()
if len(a) > len(b) and len(a) > len(c):
    print(a)
elif len(b) > len(a) and len(b) > len(c):
    print(b)
else:
    print(c)
```

### Задача 9 – Больше меньше
```python
a, b = map(int, input().split())
if a < b:
    print('<')
elif a > b:
    print('>')
else:
    print('=')
```

### Задача 10 – Расстояние до отрезка
```python
a, b, c = map(int, input().split())
lo = min(a, b)
hi = max(a, b)
if c < lo:
    print(lo - c)
elif c > hi:
    print(c - hi)
else:
    print(0)
```

### Задача 11 – 3x+1
```python
n = int(input())
print(n, end='')
while n != 1:
    if n % 2 == 1:
        n = 3 * n + 1
    else:
        n = n // 2
    print('', n, end='')
print()
```

### Задача 12 – Ближайшая степень двойки
```python
n = int(input())
p = 1
while p * 2 <= n:
    p *= 2
print(p)
```

### Задача 13 – Номер в очереди
```python
count = 0
while True:
    name = input()
    count += 1
    if name == 'Petr':
        print(count)
        break
```

### Задача 14 – Не делится на ...
```python
n, a = map(int, input().split())
count = 0
x = a
result = []
while count < n:
    if x % 2 != 0 and x % 3 != 0 and x % 5 != 0 and x % 7 != 0:
        result.append(str(x))
        count += 1
    x += 1
print(' '.join(result))
```

### Задача 15 – НОД
```python
a, b = input().split()
a = int(a)
b = int(b)
while b != 0:
    a, b = b, a % b
print(a)
```
