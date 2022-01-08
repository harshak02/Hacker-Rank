# Enter your code here. Read input from STDIN. Print output to STDOUT

# test = input()
# test = int(test)

# for i in range(test) :
#     listTemp = input().strip().split()#wont work
#     listFinal = list(map(int,listTemp))

#     if(listFinal[0]==7 or listFinal[0]==8 or listFinal[0]==9) :
#         print("YES")
        
#     else :
#         print("NO")

test = input()
test = int(test)

for i in range(test) :
    strTemp = input()

    if(strTemp[i] == "7" or strTemp[i]=="8" or strTemp[i]=="9") :
        print("YES")

    else :
        print("NO")