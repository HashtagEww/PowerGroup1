#include <iostream>

using namespace std;

void GCDFunc(long long int A, long long int B){ //function for find the GCD

    long long int r = 1, GCD = 0; //r means remainder

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
    cout << "The greatest common divisor of the two numbers is: " << GCD << "\n\n" << endl; //prints the GCD
}

void MenuFunc(){ //menu function header

    long long int A = 0, B = 0, num = 0;

    while (num != -1){ //loops the program while A and B are not equal to -1

        cout << "Please enter a number from the list below to start: " << "\n" << endl;
        cout << "1. Greatest Common Divisor." << endl;
        cout << "2. Least Common Multiple." << "\n" << endl;
        cout << "Input -1 to exit the program." << endl;
        cin >> num;
        cout << "\n";

        if (num == 1){

            cout << "Input the first non-negative, common divisor number: " << endl;
            cin >> A; //gets a user input for A
            cout << "Input the second non-negative, common divisor number: " << endl;
            cin >> B; //gets a user input for B
            cout << "\n";

            GCDFunc(A, B); //calls the GCD function
        }
    }
    cout << "The program is now ending..." << endl; //end program statement
}

int main(){

    MenuFunc(); //menu function call

return 0;
}
