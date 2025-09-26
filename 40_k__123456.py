k = [1,2,3,4,5,6]

l = len(k)

n = 4

# if (n>l):
#   n = n % l

for i in range (0 , n):

  temp = k[-1]
  for j in range (l-2, -1, -1):
    k[j+1] = k[j]
  k[0] = temp
print(k)