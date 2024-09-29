class Class1:
    def show(self):
        print("I am class 1")


class Class2(Class1):
    def show(self):
        print("I am class 2")

class Class3(Class1):
    def show(self):
        print("I am class 3")


obj1 = Class1()
obj2 = Class2()
obj3 = Class3()

# overriding

obj1.show()
obj2.show()
obj3.show()

    