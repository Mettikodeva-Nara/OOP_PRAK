a = 0b10101011
b = 0b00100101
c = (a & b) | (a & b)
print(a)
print('{0:08b}'.format(a))
print(b)
print('{0:08b}'.format(b))
print(c)
print('{0:08b}'.format(c))