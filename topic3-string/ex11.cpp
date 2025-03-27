#include<string>
#include<iostream>
using namespace std;
int main()
{
    string city("Bhopal");
    cout<<"string is "<<city<<endl;
    cout<<"string capacity is "<<city.capacity()<<endl;
    cout<<"string length is "<<city.length()<<endl;
    city=city+" is capital of MP";
    cout<<"string is "<<city<<endl;
    cout<<"string capacity is "<<city.capacity()<<endl;
    cout<<"string length is "<<city.length()<<endl;
}