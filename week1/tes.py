from copy import deepcopy
a = [1,2,3,4,5,[6,7]]
b = deepcopy(a)
b[5][0] = 99
print(a)
print(b)
    