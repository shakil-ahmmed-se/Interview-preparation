#include <iostream>
using namespace std;

class Class1 {
public:
    void show1() {
        cout << "I am class 1" << endl;
    }
};

class Class2 {
public:
    void show2() {
        cout << "I am class 2" << endl;
    }
};

class Class3 : public Class1, public Class2 {
public:
    void show3() {
        cout << "I am class 3" << endl;
    }
    
    void showAll() {
        Class1::show1();
        Class2::show2();
        show3();
    }
};

int main() {
    Class3 child_obj;
    child_obj.showAll();

    return 0;
}
