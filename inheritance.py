# inheritance means to inherent something to others

# like a child can have the behaviour like his parent so we can simply say that behaviour of the parents were inhereted to the ChildProcessError

# so we can inheret the nehaviour of Parent class to the Child class

# parent class
class Dad:
    def __init__(self, birth, name, color):
        self.birth = birth
        self.name = name
        self.color = color

    def walking(self):
        print(f"Dad {self.name} can walk")

# child class - in which behaviour og Dad class will be inherented
class Child(Dad):
    def __init__(self, birth, name, color, school, skills):
        super().__init__(birth, name, color)
        self.school = school
        self.skills = skills

    def maturing(self):
        print(f"Child named {self.name} is now maturing with the skills like {[i for i in self.skills]} & goes to school named {self.school}")

father = Dad('11-11-2000', 'Bob', 'Black')
print(father.walking())

son = Child('12-12-2035', 'Tyson', 'Grey', 'St.Xaviours', ['Programming', 'Problem Solving', 'Analytics'])
print(son.maturing())