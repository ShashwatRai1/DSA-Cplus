#include <iostream>
using namespace std;

int main(){
    int i=1, j=0, count=1, n ;
    cin>>n;
 
    while(i<=n){
        while(j<i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        j=0;
        i++;
    }
}