#include <iostream>
using namespace std;

int main(){
    int i=1, j=1, n;
    cin>>n;
    while(i<=n){
        while(j<=i){
            cout<<i-j+1<<" ";
            j++;
        }
        j=1;
        i++;
        cout<<endl;
    }
}