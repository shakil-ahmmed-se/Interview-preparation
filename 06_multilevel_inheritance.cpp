#include<bits/stdc++.h>
using namespace std;

class Class1{
    public:
    void show1(){
        cout<<"I am class 1"<<endl;
    }
};

class Class2: public Class1{
    public:
    void show2(){
        cout<<"I am class 2"<<endl;
    }
};

class Class3: public Class2{
    public:
    void show3(){
        cout<<"I am class 3"<<endl;
    }
};

int main(){
    
    Class3 child_obj;
    child_obj.show1();
    child_obj.show2();
    child_obj.show3();

    return 0;
}