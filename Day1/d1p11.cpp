# include <iostream>
using namespace std;

int main(){
    int i=1, j=1, n;
    cin>>n;

    while (i<=n){
        while(j<=n){
            char ch ='A'+i-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        j=1;
        i++;
    }
    
    
}