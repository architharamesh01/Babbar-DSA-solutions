#include <iostream>
using namespace std;
int main(){
    int n,i,a,b;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++){
        cout<<"enter the input: ";
        cin>>arr[i];
    }
    a=arr[0];
    for(i=0;i<n;i++){
        if (arr[i]>a){
            a=arr[i];
        }
    }
    b=arr[0];
    for(i=0;i<n;i++){
        if (arr[i]<b){
            b=arr[i];
        }
    }
    cout<<"largest: "<<a<<endl;
    cout<<"smallest: "<<b;
    return 0;
}
