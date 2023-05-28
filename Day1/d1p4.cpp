#include <iostream>
using namespace std;

int main(){
    int i=0;
    int n;
    cin>>n;

    while(i<n){
        int j=1;
        while(j<n+1){
            cout<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}