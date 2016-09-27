/*Project Euler solution to problem no. 1
 *finds first 1000 multiples of 3 & 5
 *calculates the sum of these multiples*/

#include <iostream>
using namespace std;

mult3_5(){
    int sum;
    for(unsigned int i = 0;i < 1000; ++i){
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    cout << sum << endl;
}

int main(){
    mult3_5();
}