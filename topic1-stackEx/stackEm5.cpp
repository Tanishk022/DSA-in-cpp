// Final and improved code of stackexe3
#include<iostream>
using namespace std;
class stack{
    int *p;
    int tos;
    int size;
public:
    stack(int);
    void push(int);
    int pop();
    int peek();
    bool isEmapty();
    ~stack();
};
stack::stack(int size){
    p=new int[size];
    this->size=size;
    tos=-1;
}
void stack::push(int x){
    if(tos==size-1){
        cout<<"stack overflow"<<endl;
        return;
    }
    p[++tos]=x;
    cout<<"pushed"<<x<<endl;
}
int stack::pop(){
    if(isEmapty()){
        cout<<"stack underflow"<<endl;
        return -1;
    }
    return p[tos--];
}
int stack::peek(){
    if(isEmapty()){
        cout<<"stack underflow"<<endl;
        return -1;
    }
    return p[tos];
}
bool stack::isEmapty(){
    return tos==-1;
}
stack::~stack(){
    delete[]p;
}
int main()
{   
    int size;
    cout<<"what is size of array you want";
    cin>>size;
    stack obj(size);
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