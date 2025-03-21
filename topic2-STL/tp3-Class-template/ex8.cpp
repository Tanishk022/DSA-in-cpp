//value given by user
#include<iostream>
using namespace std;
template<typename t1,typename t2>
void add(t1 x, t2 y){
    cout<<"sum is "<<x+y<<endl;
}
int main()
{
   int a;
   double b;
   cout<<"enter value of a and b "<<endl;
   cin>>a>>b;
   cout<<"value of a "<<a<<" and b "<<b<<endl;
   add(a,b);
   
}