#include<string>
#include<iostream>
using namespace std;
int main()
{
    string s1="good";
    string s2="evening";
    string s3;
    // s3=s1+s2; // give output goodevening
    s3=s1+" "+s2;//give output good evening this method called concetinat
    cout<<s3<<endl;
}