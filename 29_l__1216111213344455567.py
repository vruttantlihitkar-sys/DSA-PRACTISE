l = [1,2,16,11,12,13,344,455,567]

is_sorted = True

for i in range (len(l)-1):
     if l[i]>l[i+1]:
      is_sorted = False
      break


if is_sorted == True:
  print("sorted")
