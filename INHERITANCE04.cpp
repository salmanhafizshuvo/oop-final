#include<iostream>
using namespace std;

class base { 
    int i;
    public:
    base (int n)
    {
        cout<<"construting base class \n";
        i = n;
    }
    ~base(){
        cout<<"destucting base class \n";
    }
    void showi() {
        cout <<i<<"\n";
    }
};

class derived : public base {
    int j;
    public:
    derived(int n):base (n){
        cout<<"constracting drived class \n";
        j=0;
    }
    ~derived(){
        cout << "destucting drived class \n";
    }
    void showj(){
        cout<<j<<"\n";
    }
};