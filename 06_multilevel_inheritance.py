class Class1:
    def show1(self):
        print("I am class 1")

class Class2(Class1):
    def show2(self):
        print("I am class 2")

class Class3(Class2):
    def show3(self):
        print("I am class 3")


child_obj  =  Class3()
child_obj.show1()
child_obj.show2()
child_obj.show3()