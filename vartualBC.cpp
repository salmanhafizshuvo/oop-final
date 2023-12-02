#include<iostream>
using namespace std ;

class base {
    public:
        int i;

};

class drived1: virtual public base {
    public : 
    int j ;
};

class drived2: virtual public base {
    public:
        int k;
};

class drived3: public drived1 , public drived2 {
    public : 
        int product (){
            return i * j * k;  
        }

} ;

int main () {
    drived3 ob;
    ob.i=10;
    ob.j=3;
    ob.k=5;
         cout << "product is " << ob.product()<<"\n";
         return 0;  
}
