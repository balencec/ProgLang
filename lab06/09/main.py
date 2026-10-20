value = 1
for letter in 'abcdefghijklmnopqrstuvwxyz':
    for number in range(100):
        globals()[letter + str(number)] = value
        value += 1

print(a0, a99)
print(b0, b99)
print(m50)
print(z0, z99)
