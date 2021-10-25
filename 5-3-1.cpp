// Roll no :: E224
#include<iostream>
using namespace std;
int main(){
    int num = 4;
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl; // spaces for next int;;
    }
    return 0;
}