# Polymorphism is an ability(in OOPs) to use common interface for multiple form (sata types)

# implementation of Polymorphism
class Fly:
    def fly(self):
        print("parrot can fly")

    def swim(self):
        print("parrot can't swim")


class Swim:
    def fly(self):
        print("penguin can't fly")

    def swim(self):
        print("penguin can swim")

# common interface


def fly_test(para):
    para.fly()
    para.swim()


parrot = Fly()
penguin = Swim()

# we are pssing this to the common interface so that appropriate output will be comes
fly_test(parrot)
fly_test(penguin)
