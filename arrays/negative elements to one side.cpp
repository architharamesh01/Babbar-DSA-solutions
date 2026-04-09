#include <iostream>
using namespace std;
int main(){
    int n,i,j=0;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter the number: ";
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
