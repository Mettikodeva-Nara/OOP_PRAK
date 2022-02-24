
class Animal:
    def __init__(self, name):
        self.name = name
    @property
    def sound(self):
        print("Animal sound")

class Dog(Animal):
    def __init__(self, name):
        super().__init__(name)

    def sound(self):
        print("guk guk")
class Cat(Animal):
    def __init__(self, name):
        super().__init__(name)

    def sound(self):
        print("meow")

class Monkey(Animal):
    def __init__(self, name):
        super().__init__(name)

    def sound(self):
        print("uu aa")
    

animal = []
    