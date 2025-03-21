#include<iostream>
using namespace std;
template <typename T>
class Box{
    T l,b,h;
public:
    void get(){
        cout<<"enter values:";
        cin>>l>>b>>h;
    }
    void show()
    {
        cout<<"len ="<<l<<",breath ="<<b<<", height="<<h<<endl;
    }
};
int main(){
    Box<int> b1;
    Box<double>b2;
    cout<<"enter int values:"<<endl;
    b1.get();
    cout<<"enter double values:"<<endl;
    b2.get();
    b1.show();
    b2.show();
}