# CONSTRUCTOR
# -->A constructor is a special kind of method that Python calls when it instantiates an object using the definitions found in your class

# illustration of Constructor
class Student:
    id = 0
    name = "Default name"
    email = "sample@sample.sample"
    schoolName = "Default school name"
    no_of_leaves = 10
    # this __init__ is called a constuctor
    def __init__(self, id=id, name=name, email=email, schoolName=schoolName):
        self.id = id
        self.name = name
        self.email = email
        self.schoolName = schoolName

    def printDetails(self):
        return(f"ID = {self.id}\nName = {self.name}\nEmail = {self.email}\nSechool name = {self.schoolName}\n")

student1 = Student()
student2 = Student(1, "David", "david@gmail.com", "St. Xavious")

print(student1.printDetails())
print(student2.printDetails())

# to access the default values provided inside a Student class
print(Student.id)
print(Student.name)
print(Student.email)
print(Student.schoolName)
print(Student.no_of_leaves)

print(student1.no_of_leaves)


# DESTRUCTOR
# -->Destructors are called when an object gets destroyed

# illustration of Destructor
class Sample:
    def __init__(self):
        print("sample created")
    
    def __del__(self):
        print("Destructor called, Sample deleted")

sample1 = Sample()
del sample1