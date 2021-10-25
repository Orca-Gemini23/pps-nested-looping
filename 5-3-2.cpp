// Roll no :: E224
#include <iostream>
using namespace std;
int main(){
    int num, k = 1;
    cout << "Enter the num range for the series: ";
    cin >> num;
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= (5 - i); j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << k << " ";
            k = k + 1;
        }
        cout << endl;
    }
    return 0;
}