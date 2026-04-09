#include <iostream>
using namespace std;
int main(){
    int r,c,i,j,s;
    cout<<"enter the no.of row: ";
    cin>>r;
    cout<<"enter the no.of column: ";
    cin>>c;
    int m[r][c];
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            cout<<"enter the row "<<i+1<<" and column "<<j+1<<" : ";
            cin>>m[i][j];
        }
    }
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"enter number to search: ";
    cin>>s;
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            if(m[i][j]==s){
                cout<<"row: "<<i+1<<endl<<"column: "<<j+1<<endl;
            }
        }
    }
    
    return 0;
}
