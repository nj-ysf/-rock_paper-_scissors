d1  = {

"name " : "DECT" ,
"short_name" : "DECT" ,
"version" : "1.0" ,
"release_date" : "2024-06-01" ,
"author" : "youssef mohamed" ,
"features" : [
    "High-quality voice communication",
    "Secure encryption",
    "Multiple handsets support",
    "Long battery life",
    "Easy installation and setup"
] 



}
d2  = d1 
del d2["name "] 
d2.popitem()
print(d1)
d2.update({"test" : "aaa" })
d2["test"] = "bbb"
print(d1)
d3  = d1.copy()
d3.clear()
print(d3)
d2.clear()
print(d1.keys())
# nested dict
mamber1 = {
    "name" : "Alice" ,
    "age" : 30 ,
    "phone" : "123-456-7890"
}
mamber2 = {
    "name" : "Bob" ,
    "age" : 25 ,
    "phone" : "987-654-3210"
}
band  = {
    "mamber1" : mamber1 ,
    "mamber2" : mamber2
}
print(band["mamber1"])
print(band["mamber1"]["name"])


print("")
# sets
numbers = {1, 2, 3, 4,4, 5, 5}
print(type(numbers))
print(numbers)
one = {1 , 2 , 3}
two = {3 , 4 , 5}
set1= one.union(two)
set2 = one.intersection(two)
print(set1)
print(set2)