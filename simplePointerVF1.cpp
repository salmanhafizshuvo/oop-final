#include<iostream>
using namespace std ;

class base{
    public : 
        int var_base=1;
            virtual void display(){
                cout << "1 display the base class vaiable () : "<<var_base<<endl;
            }
};

class drived:public base {
    public : 
        int drived_var=2;
            void display(){
                cout << "2 Dispaly base class variable  () "<<var_base<<endl;
                cout << "2 display the drived class vaiable () " <<drived_var<<endl;
            }
};

int main () {
    base *baseClassPointer;
    base ob_base;
    drived ob_d;

    baseClassPointer = &ob_d;
    baseClassPointer -> display();
}