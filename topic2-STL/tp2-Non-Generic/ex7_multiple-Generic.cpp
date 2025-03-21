//value given by programmer
#include<iostream>
using namespace std;
template<typename t1,typename t2>
void add(t1 x, t2 y){
    cout<<"sum is"<<x+y<<endl;
}
int main()
{
    cout<<"sum of 10.5 and 30 is"<<endl;
    add(10.5,30);
    cout<<"sum of A and 30 is"<<endl;
    add('A',30);
}
//value given by user
