k = [1,6,8,9,10,10]
lk =  len(k)

w = [1,2,3,3,5,6,6]

lw = len(w)

for i in range (0 ,  lw):
  k.append(w[i])
k.sort()
print(k)
x = []
for i in k:
  if k[i]==k[i+1]:
    x.append()


