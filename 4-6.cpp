// Series 1 + x + x^2/2! + x^3/3! ... so on 
// Roll no : E224
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int num, sum = 0, n, power, division, factorial = 1, x;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the value of x: ";
    cin >> x;

    for(int i = 1; i <= n; i++){
        power = pow(x,i); 
        factorial = factorial * i;
        division = power/factorial; 
        sum = sum + division;
    }

    cout << sum << endl;
    return 0;
}