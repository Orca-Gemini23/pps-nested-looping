// Roll no : E224
#include<iostream>
using namespace std;
int main(){
    int num, f1 = 0, f2 = 1, f = 0;
    cout << "Enter the number for the fibonacci series: ";
    cin >> num;
    
    cout << f1 << " " << f2 << "";

    
    for ( int i = 2; i <= num ; i++){
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        cout << " " << f;
    }

    return 0;
}