
#list methods
a =[2,3,4]
a.append(4)
print("append method : ", a )
o/p=append method :  [2, 3, 4, 4]
#a.append(4,5) #list.append() takes exactly one argument (2 given)
a.append([4,5]) # it was like nested list
print(a)
b=[3,4,5]
a.extend(b)
print('extend method',a)
o/p=extend method [2, 3, 4, 4, 3, 4, 5]
print(a[1])
o/p=3
a.insert(1,5)  # insert the second argument at the place of 1st argument
print('insert method',a)
o/p=[2, 5, 3, 4, 4, 3, 4, 5]
print(a[1])
a.insert(20,5)#when we give the 1st argumnt greater than the list size it will inset at the end of the list
print('insert method',a)
o/p=insert method [2, 5, 5, 3, 4, 4, 3, 4, 5, 5]
a.remove(3)
print('remove method',a)
o/p=remove method [2, 5, 5, 4, 4, 3, 4, 5, 5]
#a.remove(10) #if the given element is not present in the list it will through error
#print('remove method',a)
res=a.pop(3) # it removes an element at the given index and returns that elemnt
print('pop method',res)
print('pop method',a)
a.clear() #emptie the list
print('clear method',a)

