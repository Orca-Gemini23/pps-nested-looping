// Roll no: E224
#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter the n -- limit for the series: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}