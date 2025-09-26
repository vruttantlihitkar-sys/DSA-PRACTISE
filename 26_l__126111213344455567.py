l = [1,2,6,11,12,13,344,455,567]

count = 0

for i in range (0,len(l)-1):

  if l[i] < l[i+1]:
    count += count
  else:
    break

if count == len(l):
    print("sorted")
else:
    print("not sorted")




