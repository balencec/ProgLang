### Задача 1 – Маршрутка
```python
n = int(input())
mest = 15
uehali = (n // mest) * mest
ostalis = n - uehali
print(uehali, ostalis)
```

### Задача 2 – Сумма половин
```python
s = input()
mid = len(s) // 2
first = int(s[:mid])
second = int(s[mid:])
print(first + second)
```

### Задача 3 – Жажда
```python
n = int(input())
voda = n / 3
print(f"{voda:.3f}")
```

### Задача 4 – Рубли и копейки
```python
price = float(input())
rub = int(price)
kop = round((price - rub) * 100)
print(rub, "rub", kop, "kop")
```

### Задача 5 – Отчет
```python
n, m, c, k = map(int, input().split())
vsego = n * m
nuzhno = vsego - k
if nuzhno <= 0:
    print(0)
else:
    pachek = (nuzhno + 199) // 200
    print(pachek * c)
```

### Задача 6 – Подарки
```python
n, m, k = map(int, input().split())
vsego = n * m
korobok = (vsego + k - 1) // k
print(korobok)
```

### Задача 7 – Датчик пульса
```python
n, t = input().split()
n = int(n)
t = float(t)
udarov = n * 60 / t
print(int(udarov) if udarov == int(udarov) else int(udarov) + 1)
```

### Задача 8 – Точки на прямой
```python
x, y = map(float, input().split())
start = int(x) if x == int(x) else int(x) + 1
end = int(y)
if end < start:
    print(0)
else:
    print(end - start + 1)
```

### Задача 9 – Буквы и цифры
```python
s = input()
total = 0
for ch in s:
    if ch.isdigit():
        total += int(ch)
print(total)
```

### Задача 10 – Скобки в зазеркалье
```python
s = input()
result = ''
for i in range(len(s) - 1, -1, -1):
    if s[i] == '(':
        result += ')'
    else:
        result += '('
print(result)
```

### Задача 11 – Разворот слов
```python
s = input().split()
result = []
for word in s:
    result.append(word[::-1])
print(' '.join(result))
```

### Задача 12 – Минимальные делители
```python
numbers = input().split()
result = []
for num in numbers:
    n = int(num)
    d = 2
    while n % d != 0:
        d += 1
    result.append(str(d))
print(' '.join(result))
```

### Задача 13 – Сумма делителей
```python
n = int(input())
total = 0
for d in range(1, n):
    if n % d == 0:
        total += d
print(total)
```

### Задача 14 – Игра в пробке
```python
n = int(input())
masha = 0
dasha = 0
for i in range(n):
    num = int(input())
    if num % 3 == 0:
        masha += 2
    else:
        dasha += 1
print(masha, ':', dasha, sep='')
```

### Задача 15 – Прибыль
```python
n = int(input())
total = 0
for i in range(n):
    stoimost, zatraty = map(int, input().split())
    if stoimost > zatraty:
        total += stoimost - zatraty
print(total)
```
