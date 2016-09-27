/*Project Euler solution to problem no. 2
 *You can enter any number for this program
 *project euler indicates that 4 Million is
 *the number utilized. I thought it would be
 *fun to just allow user input, this program
 *will take a fibonacci sequence and add all
 *even numbers in that sequence.*/

#include <iostream>
using namespace std;

void fib(int num){
    int A=0,B=1,total=0,sum=0;
    while(total < num) {
        //cout << total << endl; <---------- Uncomment this line to view fibonacci sequence numbers.
        total = A + B;
        A = B;
        B = total;
        if (total % 2 == 0) {
            sum += total;
        }
    }
    cout << sum << endl;  //Total of sum
}

int main(){
    int num;
    cout << "Enter a number between 1 and 4 Million: ";
    cin >> num;
    cout << endl;

    fib(num);

    return 0;

}