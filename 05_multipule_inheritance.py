class Class1:
    def show1(self):
        print('Hello, I am class 1')
    
class Class2:
    def show2(self):
        print('Hello,I amd class 2')

class Class3(Class1,Class2):
    def show3(self):
        print('Hello, i am class 3')


child_obj = Class3()
child_obj.show1()
child_obj.show2()
child_obj.show3()