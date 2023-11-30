#include <iostream>
using namespace std;

class base {
    public :
    base (){cout << "constructing base class \n" ;}
    ~base (){cout << "destructing base class \n" ;}
};

class derived:public base {
    int j;
        public: 
        derived(int n)
        {
            cout << "constructing derived class \n";
            j=n;
        }
        ~derived(){cout << "destructing base class \n";}
        void showj(){cout<<j<<"\n";}
};

int main () {
    derived o(10);
    o.showj();


}

