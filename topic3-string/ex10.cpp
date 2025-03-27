#include<string>
#include<iostream>
using namespace std;
int main()
{
    string s1="Good";
    string s2="Evening";
    if(s1>s2){
        cout<<s1<<" is grether then "<<s2<<endl;
    }
    else if(s1<s2){
        cout<<s2<<" is grether then "<<s1<<endl;
    }
    else{
        cout<<"equal";
    }
}