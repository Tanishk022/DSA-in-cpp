// improved code of stackexe1
#include<iostream>
using namespace std;
class stack{
    int arr[5];
    int tos;
public:
    stack();
    void push(int);
    int pop();
    int peek();
    bool isEmapty();
};
stack::stack(){
    tos=-1;
}
void stack::push(int x){
    if(tos==4){
        cout<<"stack overflow"<<endl;
        return;
    }
    ++tos;
    arr[tos]=x;
    cout<<"pushed"<<x<<endl;
}
int stack::pop(){
    if(tos==-1){
        cout<<"stack underflow"<<endl;
        return -1;
    }
    int x = arr[tos];
    tos--;
    return x;
}
int stack::peek(){
    if(tos==-1){
        cout<<"stack underflow"<<endl;
        return -1;
    }
    int x = arr[tos];
    return x;
}
bool stack::isEmapty(){
    if(tos==-1){
        return true;
    }
    else 
    {
       return false; 
    }
    
}
int main()
{
    stack obj;
    int x=10;
    for(int i=1;i<=6;i++){
        obj.push(x);
        x=x+10;
    }
    x=obj.peek();
    cout<<"top element of the stack "<<x<<endl;
    for(int i=1;i<=6;i++){
            x=obj.pop();
            if(x!=-1){
                cout<<"popped element"<<x<<endl;
            }
    }
}
