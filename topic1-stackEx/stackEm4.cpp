// Final and improved code of stackexe3
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
    int choice;
    int x;
    do{
        cout<<"1.Push \n2.Pop \n3.Peek \n4.Quit"<<endl;
        cout<<"enter your choice";
        cin>>choice;
        switch (choice)
        {
        case 1: 
            cout<<"enter the element you want to push: ";
            cin>>x;
            obj.push(x);    
           break;
        case 2:
                x=obj.pop();
                if(x!=-1){
                    cout<<"popped element"<<x<<endl;
                }
            break;
        case 3:
             x=obj.peek();
             if(x!=-1)
                 cout<<"top element of the stack "<<x<<endl;
             break;
        case 4:
            cout<<"Thank you for using the app"<<endl;
            break;
        default:
            cout<<"wrong choice"<<endl;
            break;
        }
    }
        while (choice!=4);
    
}