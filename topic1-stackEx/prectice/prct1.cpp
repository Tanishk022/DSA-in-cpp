#include<iostream>
using namespace std;
class Stack{
    int tos=0;
    int *arr;
    int size;
public:
    Stack(int);
    void push(int);
    int pop();
    int peek();
    int isempty();
    ~Stack();
};
Stack::Stack(int n){
    this->size=n;
    tos=-1;
    arr = new int[size];
}
Stack::~Stack() {
    delete[] arr;
}
void Stack::push(int x){
    if(tos==size-1){
        cout<<"stack overflow"<<endl;
        return;
    }
    ++tos;
    arr[tos]=x;
    cout<<"Pushed:"<<x<<endl;
}
int Stack::pop(){
    if(tos==-1){
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    int temp=arr[tos];
    tos--;
    cout<<"Popped:"<<temp<<endl;
    return temp;
}
int Stack::peek(){
    if(tos==-1){
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    int temp=arr[tos];
    cout<<"top element of stack:"<<temp<<endl;
    return temp;
}
int main(){
    int n;
    cout<<"enter the size of Stack:";
    cin>>n;
    int x=1;
    Stack obj(n);
    for(int i=0;i<n;i++){
        obj.push(x);
        x++;
    }
    obj.peek();
    for(int i=0;i<n;i++){
        obj.pop();
    }
    obj.peek();
}