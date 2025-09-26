LX = [1,1,1,4,4,4,20,30,30,231,231]

LY = []

for i in range (0,len(LX)-1) :
  if LX[i]!=LX[i+1]:
    LY.append(LX[i])

print (LY)