# list1 = [3,7,6,5,2,9]

# list1 = sorted(list1,reverse=True)

# print(list1)

#here the use of sorted will change the list in the xerox copy of that 
#but not the original list like of sort()


#https://www.programiz.com/python-programming/methods/built-in/sorted

list1 = [[1,2],[5,4],[2,3],[8,0]]

listTemp = sorted(list1,key=lambda item : item[1])

print(listTemp)


