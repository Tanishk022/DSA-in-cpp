#include<iostream>
using namespace std;
template<typename t>
t max(t p,t q){
    if(p>q){
        return p;
    }
    return q;
}
int main()
{
    int a=10,b=20;
    cout<<"max of "<<a<<" and "<<b<<" is :"<<::max(a,b)<<endl;
    char ch1='A',ch2='B';
    cout<<"max of "<<ch1<<"and "<<ch2<<" is :"<<::max(ch1,ch2)<<endl;
    double i=10.6,j=10.5;
    cout<<"max of "<<i<<" and "<<j<<" is :"<<::max(i,j);
}