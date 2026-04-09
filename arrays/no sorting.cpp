#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter the number: ";
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    cout<<"descending order: "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    cout<<"ascending order: "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
