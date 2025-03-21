#include<iostream>
using namespace std;
template<typename t>
void diplay(t p,int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<",";
    }
    cout<<endl;
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    double brr[]={10.2,20.3,30.5,40.6,50.8,60.9};
    char crr[]={'B','H','O','P','A','L'};
    diplay(arr,sizeof(arr)/sizeof(int));
    diplay(brr,sizeof(brr)/sizeof(double));
    diplay(crr,sizeof(crr)/sizeof(char));

}