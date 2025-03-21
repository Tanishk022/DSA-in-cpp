#include<iostream>
using namespace std;
template<typename t>
t add(t x, t y){
    t z;
    z=x+y;
    return z;
}
int main(){
    cout<<"sun of 10 and 20 is:"<<add(10,20)<<endl;
     cout<<"sun of 10.5 and 20.6 is:"<<add(10.5,20.6)<<endl;
      cout<<"sun of 'A' and 'B' is:"<<add('A','B')<<endl;
}