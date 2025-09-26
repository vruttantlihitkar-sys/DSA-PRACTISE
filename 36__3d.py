# 3d

three = np.array([[[1,3,4],[1,2,9]],[[1,2,3],[1,3,2]]])


print(np.ndim(three))

print(three)

#4d

fouurd = np.arange(0,3**5).reshape(3,3,3,3,3)

print(fouurd)

print(np.ndim(fouurd))