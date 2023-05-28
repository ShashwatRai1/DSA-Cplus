#include <iostream>
using namespace std;

int main(){
    int a ;
    cout<< "Enter the Number" <<endl;
    cin>> a;

    if(a>0){
        cout << "No is Positive" <<endl;
    }
    else{
        if(a<0){
            cout << "No is Negative" << endl;
        }
        else{
            cout << "No is Zero" << endl;
        }
    }

}