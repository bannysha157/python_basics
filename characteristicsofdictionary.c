1)Dictionaries cannot have two items with the same key:
my_dict={"A":"Apple","A":"Aircraft"}
print(my_dict)
#o/p={'A': 'Aircraft'}

2)Dictionary keys are case senstive:
my_dict={"A":"Apple","a":"Aircraft"}
print(my_dict)
#o/p={'A': 'Apple', 'a': 'Aircraft'}

3)Dictionaries cannot have mutable elements askeys
my_dict={[1,2,3]:"list"}
#o/p=typeerror:unhashable type:"list"

4)
items can be added using key asindex:
my_dict={"A":"Ant","B":":Bat"}
my_dict["C"]="Cat"
print(my_dict)
#o/p={'A': 'Ant', 'B': ':Bat', 'C': 'Cat'}

5)items can be modifiying using key asindex:
my_dict={"A":"Ant","B":"Bat"}
my_dict["B"]="Boll"print(my_dict)
#o/p={'A': 'Ant', 'B': 'Boll'}






