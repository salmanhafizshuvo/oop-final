#include<iostream>
using namespace std;

ckass vehicle{
    int num_wheels;
    int range;
    public:
        vehicle(int w, int r)
        {
            num_wheels=w;
            range = r;
        }
        void showv(){
            cout << "wheels:"<<num_whees << "\n";
            cout <<"range:"<<range<<"\n";
        }
};

class car  : public vehicle {
    int passengers;
    public : 
    void show(){
        showv();
        cout << "passengers :" << passengers <<"\n";
    }
};

class truck : public vehicle{
    int loadlimit;
    public:
    void show(){
        showv();
        cout <<"Loadlimit"<<loadlimit<<"\n";
    }
};

int main () {
    car c(5 , 4 , 500);
    truck t(3000,12,1220);

    cout<<"car : \n";
    c.show();
    cout<<"\n Truck: \n";
    t.show();
    
}

