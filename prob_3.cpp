/*Project Euler solution to problem no. 3
 *this program will return the largest prime
 *factor of the number 600851475143 and visualize
 *the prime factors as the loop runs.*/

#include <iostream>
using namespace std;

largestFactor(){
    long int n = 600851475143;
    long int i;
    for(i = 2; i <= 10000; ++i){
        while(n %  i == 0){
            n /= i;
            cout << "Yay! " << i << " is a factor, now lets test " << n << endl;
        if( n == 1 || n == i){
            return i;
        }
        }
    }

}

int main(){
    largestFactor();
    return 0;
}