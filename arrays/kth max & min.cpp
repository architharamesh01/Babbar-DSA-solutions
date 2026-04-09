#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,i,a,b;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter the input: ";
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<"enter which k-th minimum number you want from the array:";
    cin>>a;
    cout<<"enter which k-th maximum number you want from the array:";
    cin>>b;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"minimum: "<<arr[a-1]<<endl;
    cout<<"maximum:"<<arr[n-b];
    return 0;
}
