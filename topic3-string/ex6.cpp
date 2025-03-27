#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    cout<<"enter name ";
    // cin>>s1; // not take the argument after the space
    getline(cin,s1);  //use for taking arguments after the stack
    cout<<"hello "<<s1<<endl;
}