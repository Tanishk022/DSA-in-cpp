#include<iostream>
using namespace std;
template<typename t>
void display(t x){
    cout<<x<<endl;
}
int main(){
    int n=25;
    char ch='A';
    double pi=3.14;
    display(n);
    display(ch);
    display(pi);
}