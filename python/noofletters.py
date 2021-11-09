a = []
y = int(input("Enter number of sentences"))
for i in range(0,y):
   inp = input(f"Enter sentence {i+1}")
   a.append(inp)

for i in a:
   i = i.split()
   for j in i:
      print(len(j),end=' ')
      
   print()


# a = {}
# a = input("Enter sentence\n")

# a = a.split()
# for i in a:
#    print(len(i),end=" ")