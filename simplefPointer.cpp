#include<iostream>
using namespace std; 
  
  int main() {
    int marks[] = {22,23,36,66,79,89};
        for(int i = 0; i<6;i++ )
            cout<<"teh valu of marks : "<< i <<" is "<< marks[i]<<endl;

            int* p = marks;
            cout<<"the valu of marks [0]"<<*p<<endl;
            cout<<"the valu of marks [1]"<<*(p+1)<<endl;
            cout<<"the valu of marks [2]"<<*(p+2)<<endl;
            cout<<"the valu of marks [3]"<<*(p+3)<<endl;
            cout<<"the valu of marks [4]"<<*(p+5)<<endl;
            cout<<"the valu of marks [5]"<<*(p+5)<<endl;
  }