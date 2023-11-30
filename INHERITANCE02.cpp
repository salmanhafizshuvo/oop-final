#include <iostream>
using namespace std;

class base {
    int i;
    public: 
    base (int n){
        cout << "constracting base class \n";
        i = n;
    }
    ~base(){
        cout << "distructing base class \n";
    }
    void showi(){cout <<i << "\n";}
};
class dreived:public base {
    int j;
    public :
    dreived(int n):base(n){
        cout<< "constracting drived class \n";
        j=n;
    }
    ~dreived(){
        cout<<"distructing drived class \n";
    }
    void showj(){
        cout << j << "\n";
    }
};

int main (){
    dreived o(10);
    o.showi();
    o.showj();
    
}