from matplotlib import pyplot as plt
x=[]
for i in range(0,10):
    inp = input(f"Enter number {i + 1}\n")
    x.append(inp)



a = 1
d = {}
for i in range(0,10):
    a = 1
    
    if x[i]  in d:
        d[x[i]] = d[x[i]] + 1
    else:
        d[x[i]] = a
plt.bar(d.keys(),d.values())
plt.show()


print(d)



