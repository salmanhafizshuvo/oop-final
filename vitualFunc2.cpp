#include<iostream>
using namespace std;

class base {
     public : 
    int i ; 
    base (int x){i=x;}
    virtual void func(){
        cout<<"using base vartion function()";
        cout<<i<<"\n";
    }
};
class drived1:public base {
    public:
    drived1(int x):base(x){}
        void func(){
            cout << "using drived 1s vartion fo function()";
            cout <<i*i<<"\n";
        }
};
class drived2:public base {
    public:
    drived2(int x):base(x){}
};
int main (){
    base *p;
    base ob(10);
    drived1 ob_1(10);
    drived2 ob_2(13);

    p=&ob;
    p->func();
    p=&ob_1;
    p->func();
    p=&ob_2;
    p->func();

}