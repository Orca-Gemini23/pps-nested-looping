// Roll no :: E224
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int i, j;
    for( i = 1; i <= 10; i++){
        
        for(j = 1; j < 10; j++){
            if ( (i * j) / 10 == 0){ // for single num and double num space management...
                cout << i * j << "  ";
            }
            else{
                cout  << i * j << " ";
            }           
    } 

        cout << i * j << " "; 
        cout << endl;
    }
    return 0;
}