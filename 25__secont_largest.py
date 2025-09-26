# secont largest

l = [1,3,2,1,4,13,3434234,45455345,567678678]
largest = l[0]

for i in range (0, len(l)):

  largest = max(largest, l[i])
print(largest)

second_largest = l[0]

for i in range (0, len(l)):

  if l[i]<largest and l[i]> second_largest:
   second_largest = l[i]

print(second_largest)
