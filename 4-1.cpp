// Roll no : E224
#include<iostream>
using namespace std;
int main(){
    float N, S = 0, C, A;
    float Average = 0;
    cout << "How many numbers: ";
    cin >> N;
    for( C = 1; C <= N; C++){
        cout << "Enter the number: ";
        cin >> A;
        S = S + A;
    }  
    Average = (S / N);  
    cout << Average << endl;
    return 0;
}