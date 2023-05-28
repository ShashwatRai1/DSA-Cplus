#include <iostream>
using namespace std;

int main(){
    int row=1, col=1, n;
    cin>>n;
    while (row<=n){
        while (col<=row){
            cout<<row<<" ";
            col++;
            // cout<<endl;
        }
        cout<<endl;
        col=1;
        row++;
    }
    
}