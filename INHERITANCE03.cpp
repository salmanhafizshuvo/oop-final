#include<iostream>
using namespace std;

class base {
    int i;
    public: 
    base(int n){
        cout<<"constracting base class \n";
        i=n;
    }
    ~base () {
        cout << "dristracting base class \n";
    }
    void showi() {
        cout << i << "\n";
    };
};
    
    class derived: public base {
        int j;
        public:
        derived(int n, int m): base(m){
            cout<< "constructing derived class \n";
            j =n;
        }
        ~derived(){cout<<"distructing derived class \n";}
        void showj(){
            cout<<j<<"\n";
        }
    };

int main(){
    derived o(10,20);
    o.showi();
    o.showj();
    
}

