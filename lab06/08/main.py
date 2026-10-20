a = 'Hello world'

b = a
c = a[:]

print('a:', a, id(a))
print('b = a   :', b, id(b), b is a)
print('c = a[:]:', c, id(c), c is a)

a += '!'
print()
print('после a += "!"')
print('a:', a, id(a))
print('b:', b, id(b))
print('c:', c, id(c))

print()
print('Для сравнения - список (изменяемый тип):')
x = [1, 2, 3]
y = x
z = x[:]
print('y is x:', y is x)
print('z is x:', z is x)
x.append(4)
print('x:', x)
print('y:', y)
print('z:', z)
