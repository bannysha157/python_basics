s ={1,2,3}
a = {}   # which is empty dictionary
print(type(a))
a = {0}
print(type(a)) #set
#a = set()  # we can represent empty set like this
print(type(a))  
print(bool(a))  # an empty is a false

a = {'a',4,4,8.9,None}
print(a)
x = {'a',(2,3),'banny'}  # elements must be immutable
print(x)

#x = {'a',[2,3],'banny'}   #elemenrs are mutable
#print(x)

print(id(a))
a.add(30)
print(id(a))

#membership operator

print(30 in a)
print(20 in a)

print(a|x)  # returns the all elements in both sets
print(a & x) # returns the common elements in both sets
print(a-x)  # removes the common elemts and return the elements in 1st operand
print(x ^ a) #removes the common elemts and return the all elements 
print(x <=a) # return true if x is subset of a 
print(x >=a) # return true if x is superset of a

#print(x |= a) #mix all elements and add to x
#print(x &= a) #ele are updated to x which are same in two sets
#print( x -= a) #ele are updated to x by removing the same ele in x and y
#print(x^=a)


#set methods
a = {1,2,4,6,'banny'}
a.add(100)
print(a)
a.remove(2)
print(a)
#a.remove(2)  #keyerror;2
a.add(100)
print(a)
a.clear() # empty set
print(a)
a.add(1)
print(a)
b = a.copy()   #shallow copy
print(a)
print(b)
print(id(a))
print(id(b))
b.add(20)
print(a)
print(b)
print(id(a))
print(id(b))
c = b.difference(a) # b-a
print(c)
d = c.difference(a,b) #c-a-b
print(d)
a = {1,2,3,4,5}
b= {4,5,6,7,8,9}
a.difference_update(b)  # it will update the a value by removing elem which are present in b
print(a)
print(b)
b.discard(9) # removes the required ele
print(b)
d = a.intersection(b) # it will return the common ele
print(d)
a = {1,2,3,4,5}
d = a.intersection_update(b)
print(d)
print(a)  # it will update the common elements to a 4 5
print(b)  # 4 5 6 7 8 
d =a.isdisjoint(b)  # no elements in common 
print(a)
print(d)  # it will return whether two sets have intersection or not
print(b)
a ={1,2,3,4,5}
d =a.isdisjoint(b)
print(a)
print(d)  # it will return whether two sets have intersection or not
print(b)
d = a.issubset(b)
print(d)
a = {4,5}
d = a.issubset(b)
print(d)
d = a.issuperset(b)
print(d)
c = {98,3,9,"arveni",77,4}
print(c.pop())
print(c.pop())
print(b)
print(b.remove(6))
print(b)
d = a.symmetric_difference(b) #it will return the elements which are not same
print(a)
print(d)
print(b)

d=a.symmetric_difference_update(b)
print(a)
print(d)
print(b)
a = {87,3}
b = {4,5,7,8}
d = a.union(b) #it will return the all values 
print(d)
d = a.update(b) # it will the common ele to the a
print(d)
print(a)

a ={1,2,3,4}
b = {0,1,2,3}
c ={0,0,0,0}
print("all-a:",all(a))
print("all-b:",all(b))
print("all-c:",all(c))
print("any-a:",any(a))
print("any-b:",any(b))
print("any-c:",any(c))
x=enumerate(a)
print(x)
for i in x:
    print(i)
print('len ',len(a))
print('list ',list(a))
print("max ",max(a))
print("min ",min(a))
print("sum ",sum(a))

