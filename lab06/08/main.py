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

