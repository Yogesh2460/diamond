#include <iostream>
using namespace std;

class A{
    public:
    int a;
    void print(){
    a=0;
    cout<<"class A"<<a<<endl;
}
};
    
class B:virtual public A
{
    public:
    int b;
    void print(){
    b=0;
    cout<<"class B"<<b<<endl;
    }

};

class C:virtual public A
{
    public:
    int c;
    void print(){
    c=0;
    cout<<"class C"<<c<<endl;
    }

};
    
class D:public B,public C
{
public:   
    void print1()
    {//A::print();
    //B::print();
    ///c::print();
    cout<<"off"<<endl;
    }
};
    
    int main()
    {
    D ob;
  ob.a=10;
  cout<<ob.a;
    
   ob.A::print();
  ob.b;
  ob.B::print();
  ob.c;
  ob.C::print();
    ob.print1();
    }
