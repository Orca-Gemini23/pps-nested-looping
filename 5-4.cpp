// Roll no :: E224
#include<iostream>
using namespace std;
int main(){
    int i, j, p;
    for(i = 1; i < 100; i++){
        if (i == 1 || i == 0)
        {
            continue;
        }
        p = 1; // i is prime 
        for(j = 2; j <= i / 2; j++){
                if(i % j == 0){
                    p = 0; // fail for every non-mod int 
                    break;
                }
            }
        if(p == 1){
            cout << " " << i; // for every int for which p is still 1
        }
    }
    cout << endl;
    return 0;
}