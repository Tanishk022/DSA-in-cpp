#include<iostream>
using namespace std;
template <typename T>
class Box{
    T l,b,h;
public:
    Box(T i,T j,T k){
        l=i;
        b=j;
        h=k;
    }
    void show()
    {
        cout<<"len ="<<l<<",breath ="<<b<<", height="<<h<<endl;
    }
};
int main(){
    Box<int> b1(10,20,30);
    Box<double>b2(23.5,76.8,54.4);
    b1.show();
    b2.show();
}