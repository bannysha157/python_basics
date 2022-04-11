1)clear()

d={1:"bannysha",2:"banny"}
print(d)
#o/p={1: 'bannysha', 2: 'banny'}
d.clear()
print(d)
#o/p={}

2)copy()
d={1:"banny",2:"bannysha"}
     
dt=d.copy()
     
print("d is" ,d)
     
#o/p=d is {1: 'banny', 2: 'bannysha'}
print("dt is dt",dt)
     
#o/p=dt is dt {1: 'banny', 2: 'bannysha'}
dt[3]=4
print("d is ",d)
#o/p=d is  {1: 'banny', 2: 'bannysha'}
print("dt is", dt)
#o/p=dt is {1: 'banny', 2: 'bannysha', 3: 4

3)fromkeys(seq,[v]):

x=dict.fromkeys(d) #it copies the keys to new dict by default values are None
print("x is",x)
#o/p=x is {1: None, 2: None}
print("d is",d)
#o/p=d is {1: 'banny', 2: 'bannysha'}
d={1:"one",2:"two",3:"three"}
x=dict.fromkeys(d)
print(x)
#o/p={1: None, 2: None, 3: None}

4)get(key[,d]):

d={'A':'Ant','B':'Bat','C':'Cat'}
x=d.get('B')     
print(x)    
#o/p=Bat

5)items()
d={'A':'Ant','B':'Bat','C':'Cat'}
x=d.items() # it will return the key-value pairs in(key,value)format
print(x)
#o/p=dict_items([('A', 'Ant'), ('B', 'Bat'), ('C', 'Cat')])

6)keys()

x=d.keys() #it will return all the keys
print(x)
#o/p=dict_keys(['A', 'B', 'C'])

7)pop()

d={'A':'Ant','B':'Bat','C':'Cat'}
x=d.pop('B')  #it will return the key and return corresponding value
print(x)
#o/p=Bat

8)popiteam()

d={'A':'Ant','B':'Bat','C':'Cat'}
d.popitem() #it will delete the last key-value pair
#o/p=('C', 'Cat')

9)setdefault(key[,d])

d={'A':'Ant'}
    
x=d.setdefault('B',"Bat")  #it will the corresponding value
print(x)
#o/p=Bat
print(d)
#o/p={'A': 'Ant', 'B': 'Bat'}

10)update([other])

d={'A':'Ant','B':'Bat'}    
x={'C':'Cat'}    
print(d)    
#o/p={'A': 'Ant', 'B': 'Bat'}
print(x)    
#o/p={'C': 'Cat'}
d.update(x)  #update the key and value pairs
print(d)
#o/p={'A': 'Ant', 'B': 'Bat', 'C': 'Cat'}


11)value()
d={'A':'Ant','B':'Bat'}
d.values()
#o/p=dict_values(['Ant', 'Bat'])
