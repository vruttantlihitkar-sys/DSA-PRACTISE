arr = [1,3,4,2,7,11,2,9,0]

n = len(arr)
for i in range (0,n):
  minn = i
  for j in range (i+1,n):
     if arr[j]<arr[minn]:
      minn = j
  arr[minn],arr[i]=arr[i],arr[minn]
print(arr)