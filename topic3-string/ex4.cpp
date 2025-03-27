#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1("sachin");//parametrized constructor
    cout<<s1<<endl;
    string s2(s1,0,4); //parametrized constructor
    cout<<s2<<endl;
    string s3(s1,1,4);//parametrized constructor
    cout<<s3<<endl;
}