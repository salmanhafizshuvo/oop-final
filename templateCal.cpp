#include<iostream>
using namespace std;

template <class t>
    class cal{
        private : 
            t num1 , num2; 
            public:
                cal(t n1 , t n2){
                    num1 = n1 ; 
                    num2 = n2;
                }
                void displyaRes(){
                    cout<< "numbers : " <<num1 << " and " <<num2<<"."<<endl;
                    cout << num1 << "+" << num2 << "="<<add()<<endl;
                    cout<< num1 << "-" << num2 << "=" << subtract()<<endl;
                    cout << num1 << "*" <<num2 << "="<< multiply()<<endl;
                    cout <<num1<<"/"<<num2<< "=" << divied()<<endl;
                }
                t add(){
                    return num1 + num2 ;
                }
                t subtract(){
                    return num1 - num2 ;
                }
                t multiply(){
                    return num1 * num2;
                }
                t divied () {
                    return num1 / num2 ;
                }
    };

int main () {
cal <int> intcal(2,3);
cal <float> floatcalc(2.3,7.2);

cout << "int result :" << endl ;
intcal.displyaRes();

cout<<endl<<"float result : "<<endl;
floatcalc.displyaRes();

return 0;
}