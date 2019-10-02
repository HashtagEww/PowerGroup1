#include <iostream>

using namespace std;

void GCDFunc(long long int A, long long int B){ //function for find the GCD

    long long int r, GCD; //r means remainder

    while (r > 0){ //loops while r is greater than 0
        if (A > B){
            r = A % B; //makes r equal to the remainder of A divided by B

            A = B; //replaces A with B
            B = r; //replaces B with r
            GCD = A; //replaces GCD with A
        }
        else { //else statement for if B is bigger than A
            r = B % A; 

            B = A;
            A = r;
            GCD = B;
        }
    }
    cout << "The greatest common divisor of the two numbers is: " << GCD << endl; //prints the GCD
}

int main(){

    long long int A, B;

    cout << "Input the first common divisor number: " << endl;
    cin >> A; //gets a user input for A
    cout << "Input the second common divisor number: " << endl;
    cin >> B; //gets a user input for B
    cout << "\n";

    GCDFunc(A, B); //calls the GCD function

return 0;
}
