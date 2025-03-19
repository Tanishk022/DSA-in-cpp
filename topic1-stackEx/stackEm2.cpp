//IMPROVIZATION OF PREVIOUS CODE
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
    arr[++tos]=x;
    cout<<"pused"<<x<<endl;
}
int stack::pop(){
    if(isEmapty()){
        cout<<"stack underflow"<<endl;
        return -1;
    }
    return arr[tos--];
}
int stack::peek(){
    if(isEmapty()){
        cout<<"stack underflow"<<endl;
        return -1;
    }
    return arr[tos];
}
bool stack::isEmapty(){
    return tos==-1;
    
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
    cout<<"top element of the stack"<<endl;
    for(int i=1;i<=6;i++){
            x=obj.pop();
            if(x!=-1){
                cout<<"poped element"<<x<<endl;
            }
    }
}