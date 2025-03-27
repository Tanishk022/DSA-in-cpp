#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1("sachin");//parametrized constructor
    cout<<s1<<endl;
    string s2(s1);// copy constructor
    cout<<s2<<endl;
}