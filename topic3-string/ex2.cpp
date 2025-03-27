#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1("sachin",4);
    cout<<s1<<endl;
    string s2("sachin",1,4);
    cout<<s2<<endl;
    string s3("sachin",1,14);
    cout<<s3<<endl;
    string s4("sachin",14,1);
    cout<<s4<<endl;
}