k = [1,2,3,4,5,6,7]

n = 3

l = len(k)

print(l)

for i in range (0,n):
  k[:] = [k[-1]] + k[0:-1]
print(k)