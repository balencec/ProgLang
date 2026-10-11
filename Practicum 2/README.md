### Задача 1 – Маршрутка
```python
n = int(input())
mest = 15
uehali = (n // mest) * mest
ostalis = n - uehali
print(uehali, ostalis)
```

### Çàäà÷à 2 – Ñóììà ïîëîâèí
`s = input()`
`mid = len(s) // 2`
`first = int(s[:mid])`
`second = int(s[mid:])`
`print(first + second)`

### Çàäà÷à 3 – Æàæäà
`n = int(input())`
`voda = n / 3`
`print(f"{voda:.3f}")`

### Çàäà÷à 4 – Ðóáëè è êîïåéêè
`price = float(input())`
`rub = int(price)`
`kop = round((price - rub) * 100)`
`print(rub, "rub", kop, "kop")`

### Çàäà÷à 5 – Îò÷åò
`n, m, c, k = map(int, input().split())`
`vsego = n * m`
`nuzhno = vsego - k`
`if nuzhno <= 0:`
`    print(0)`
`else:`
`    pachek = (nuzhno + 199) // 200`
`    print(pachek * c)`

### Çàäà÷à 6 – Ïîäàðêè
`n, m, k = map(int, input().split())`
`vsego = n * m`
`korobok = (vsego + k - 1) // k`
`print(korobok)`

### Çàäà÷à 7 – Äàò÷èê ïóëüñà
`n, t = input().split()`
`n = int(n)`
`t = float(t)`
`udarov = n * 60 / t`
`print(int(udarov) if udarov == int(udarov) else int(udarov) + 1)`

### Çàäà÷à 8 – Òî÷êè íà ïðÿìîé
`x, y = map(float, input().split())`
`start = int(x) if x == int(x) else int(x) + 1`
`end = int(y)`
`if end < start:`
`    print(0)`
`else:`
`    print(end - start + 1)`

### Çàäà÷à 9 – Áóêâû è öèôðû
`s = input()`
`total = 0`
`for ch in s:`
`    if ch.isdigit():`
`        total += int(ch)`
`print(total)`

### Çàäà÷à 10 – Ñêîáêè â çàçåðêàëüå
`s = input()`
`result = ''`
`for i in range(len(s) - 1, -1, -1):`
`    if s[i] == '(':`
`        result += ')'`
`    else:`
`        result += '('`
`print(result)`

### Çàäà÷à 11 – Ðàçâîðîò ñëîâ
`s = input().split()`
`result = []`
`for word in s:`
`    result.append(word[::-1])`
`print(' '.join(result))`

### Çàäà÷à 12 – Ìèíèìàëüíûå äåëèòåëè
`numbers = input().split()`
`result = []`
`for num in numbers:`
`    n = int(num)`
`    d = 2`
`    while n % d != 0:`
`        d += 1`
`    result.append(str(d))`
`print(' '.join(result))`

### Çàäà÷à 13 – Ñóììà äåëèòåëåé
`n = int(input())`
`total = 0`
`for d in range(1, n):`
`    if n % d == 0:`
`        total += d`
`print(total)`

### Çàäà÷à 14 – Èãðà â ïðîáêå
`n = int(input())`
`masha = 0`
`dasha = 0`
`for i in range(n):`
`    num = int(input())`
`    if num % 3 == 0:`
`        masha += 2`
`    else:`
`        dasha += 1`
`print(masha, ':', dasha, sep='')`

### Çàäà÷à 15 – Ïðèáûëü
`n = int(input())`
`total = 0`
`for i in range(n):`
`    stoimost, zatraty = map(int, input().split())`
`    if stoimost > zatraty:`
`        total += stoimost - zatraty`
`print(total)`
