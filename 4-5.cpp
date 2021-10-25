// Roll no : E224
#include<iostream>
using namespace std;
int main(){
    int num, remainder, square, sum_digits = 0;
    cout << "Enter the number: ";
    cin >> num; // 76

    while(num > 0){
        remainder = num % 10; // rem = 6 
        square = remainder * remainder; // square = 36
        num = num / 10; // num = 7 
        sum_digits = square + sum_digits; // sd = 36 + 0 
    }
    cout << sum_digits << endl;
    return 0;
}