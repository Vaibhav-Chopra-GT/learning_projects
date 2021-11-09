a = []
y = int(input("Enter number of students\n"))

for i in range(0,y):
    inp = input(f"Enter student {i + 1} and marks")
    a.append(inp)

b = []
for i in a:
    i = i.split(' ')
    b.append(i)
maxe = b[0][1] 
for i in b:
    if maxe < i[1]:
        maxe = i[1]
        namee = i[0]
print(namee)

