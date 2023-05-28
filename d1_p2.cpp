// Prime no

# include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=2;
    while (i<n/2)
    {
        /* code */
        if (n%i==0){
            cout<< "Not Prime for "<<i<<endl;
            i=i+1;
        }
        else{
            cout<< "Prime no for "<<i<<endl;
            i=i+1;
        }

        
    }
    


}