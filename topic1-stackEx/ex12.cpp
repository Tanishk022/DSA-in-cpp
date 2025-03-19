#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int>s;
    cout<<"current size of stack: "<<s.size()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"after push stack size is:"<<s.size()<<endl;
    cout<<"top element os stack:"<<s.top()<<endl;
    s.pop();
    cout<<"after poping stack size is"<<s.size()<<endl;
    cout<<"Now top element os stack:"<<s.top()<<endl;
    while(!s.empty())
    {
        cout<<"poped element"<<s.top()<<endl;
        s.pop();
    }
    cout<<"totel element currently in stack"<<s.size()<<endl;
}