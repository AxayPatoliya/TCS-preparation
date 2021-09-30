# Abstraction means break thinngs into small parts
# example - keyboard, mouse, monitor, CPU are abstractions of whole computer system
# to achieve Abstraction in OOP we have to use Encapsulation
# Encapsulation means to hide details - like a normal person don't know what is happening inside a mouse or a keyboard because different abstracts of the keyboard were encapsulated inside a shell

# Encapsulation is nothing but to hide the implementation like we dont know whats happening inside keyboard while using it


# encapsulation and abstraction implementation
class Employee:

    no_of_leaves = 20

    def __init__(self, id, name, role):
        self.id = id
        self.name = name
        self.role = role

    def printDetails(self):
        print(f"Emloyee ID - {self.id}\nEmployee Name - {self.name}\nEmployee Role - {self.role}\n")

    # class method to change the number of leaves
    def changeLeaves(self, new_leaves):
        self.no_of_leaves = new_leaves


emp1 = Employee(1, "Rohan", "SDE")
emp1.printDetails() #we call this function and it runs this is calls abstraction, we know that it will print employee details but we dont know how! And this is capsulated inside a class called Employee this is called encapsulation

print(f"Before change - {emp1.no_of_leaves}")
emp1.changeLeaves(10)
print(f"After chnage - {emp1.no_of_leaves}")

# we constructed an Employee class which contains methods like printDetails, changeLeaves so this all methods are abstracts for the class Employee and we packed all these method inside an Employee class so this is called encapsulation