#include<iostream>
using namespace std;

class vicle {
    int num_wheels;
    int range;
    public:
        vicle(int w,int r){
            num_wheels = w;
            range = r;
        }
        void showv (){
            cout<< "wheels  : " << num_wheels <<endl;
            cout << "range : "<< range <<endl;
        }
};

class car : public vicle {
    int pessenger ;
    public  : 
        car(int p,int x,int y):vicle(x,y){
            pessenger = p;
        }
        void show ( ){
            showv(); 
                cout << "passenges : " << pessenger << endl ;

        } 
};

class truck:public vicle {
    int loadLimit ; 
            public  : 
                truck(int l , int x, int y):vicle(x,y) {

                    loadLimit = l;
                }
                void show () {
                    showv() ;
                    cout << "loadlimite" << loadLimit << endl;
                }
};


int main () {
        car c(5,4,500);
        truck t(300,12,1200);

        cout << "car: \n";
        c.show();
        cout<< "\nTuck:\n";
        t.show();

return 0;
}