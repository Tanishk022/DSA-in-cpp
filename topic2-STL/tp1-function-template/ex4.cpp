#include<iostream>
using namespace std;
template<typename t>
void swap(t&p, t&q){
    t temp;
    temp=p;
    p=q;
    q=temp;
}
int main(){
    int a=10,b=20;
    cout<<"Before swapping a="<<a<<",B="<<b<<endl;
    ::swap(a,b);
    cout<<"After swaping a="<<a<<", b="<<b<<endl;
    char ch1='A', ch2='B';
    cout<<"Before swapping ch1="<<ch1<<",ch2="<<ch2<<endl;
    ::swap(ch1,ch2);
    cout<<"After swaping ch1="<<ch1<<", ch2="<<ch2<<endl;
    double i=10.6,j=20.6;
    cout<<"Before swapping i="<<i<<",j="<<j<<endl;
    ::swap(i,j);
    cout<<"after swapping i="<<i<<",j="<<j<<endl;
}
