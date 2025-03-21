#include<iostream>
using namespace std;
template <typename T>
class Box{
    T l,b,h;
public:
    Box(T ,T ,T);
    void show();
};
template <typename T>
Box<T>::Box(T i,T j,T k){
    l=i;
    b=j;
    h=k;
}
template <typename T>
void Box<T>:: show(){
    cout<<"len="<<l<<",breadth ="<<b<<",heigth ="<<h<<endl;
}
int main(){
    Box<int> b1(10,20,30);
    Box<double>b2(23.5,76.8,54.4);
    b1.show();
    b2.show();
}