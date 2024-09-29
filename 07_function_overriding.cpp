#include<bits/stdc++.h>
using namespace std;

class Class1{
    public:
    void show(){
        cout<<"I am class 1"<<endl;
    }
};

class Class2: public Class1{
    public:
    void show(){
        cout<<"I am calss 2"<<endl;
    }
};

class Class3: public Class1{
    public:
    void show(){
        cout<<"I am class 3"<<endl;
    }
};

int main(){
    
    Class1 obj1;
    Class2 obj2;
    Class3 obj3;

    obj1.show();
    obj2.show();
    obj3.show();

    return 0;
}