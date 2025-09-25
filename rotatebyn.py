k = [1,2,3,4,5,6,7]

n = 3

l = len(k)



x= 0

while x < n:
  temp = k[-1]

  for i in range (l-2 ,-1, -1):
    k[i+1] = k[i]
  k[0] = temp
  x += 1
    


 

print(k)