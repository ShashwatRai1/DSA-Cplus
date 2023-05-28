#include <iostream>
using namespace std;

int main(){
    int i=0;
    int n;
    cin>>n;
    int count=1;

    while(i<n){
        int j=i;
        while(j<n){
            cout<<" ";
            j=j+1;
            
        }
        int k=1;
        while(k<=i+1){
            cout<<count;
            count=count+1;
            k++;
            
        }
        cout<<endl;
        i=i+1;
    }


}