#include <iostream>
using namespace std;

int main(){
    int i=0;
    int n;
    cin>>n;

    while(i<n){
        int j=i;
        while(j<n){
            cout<<" ";
            j=j+1;
            
        }
        while(j<=i+n){
            cout<<j<<" ";
            j=j+1;
            
        }
        // cout<<"*";
        cout<<endl;
        i=i+1;
    }


}