
#include<iostream>
using namespace std; 
template < class T > 
class Calculator{
 T a,b,sum;
 double avg;

public: 
    void get(); 
    void calculate();
    void show();
};
    template <class T> 
    void Calculator<T> ::get(){ 
    cout<< "enter 2 values:";
    cin >>b;
     }
template < class T >
void Calculator<T>::calculate(){
    sum=a+b; 
    avg=sum/2.0;
}
template <class T > 
void Calculator<T>::show(){
    cout<<"Nos are " <<a<<","<<b<<endl;
    cout<<"Their sum is "<<sum<<" and their avg is "<<avg<<endl;
}
int main(){
Calculator<int> Cl ; 
Calculator<double> C2; 
cout<<"Enter integers:"<<endl; 
Cl.get(); 
cout<<"Enter doubles:"<<endl;
C2.get();
Cl.calculate();
Cl.show();
C2.calculate(); 
C2.show(); 
return 0;
}