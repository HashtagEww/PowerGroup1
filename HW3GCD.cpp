#include <iostream>

using namespace std;

int GCDFunc(long long int A, long long int B, int tgl){ //function for find the GCD
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
    if (tgl == 0) //If statement for GCD
        cout << "The greatest common divisor of the two numbers is: " << GCD << "\n\n" << endl; //prints the GCD
    else if (tgl == 1){ //If statement for LCM
        return GCD;
    }
}

void LCMFunc(long long int A, long long int B){ //function for Least Common Multiple
    double LCM;
    LCM = (A * B) / GCDFunc(A, B, 1); //calculates the product of A and B divided by the GCD of A and B to find the LCM
    cout << "The least common multiple of " << A << " and " << B << " is: " << LCM << "\n\n" << endl;
}

void MenuFunc(){ //menu function header
    long long int A = 0, B = 0;
    int num = 0;

    cout << "Welcome to the GCD/LCM number calculator!" << "\n" << endl;

    while (num != -1){ //loops the program while A and B are not equal to -1
        cout << "Please enter a number from the list below: " << "\n" << endl;
        cout << "1. Greatest Common Divisor." << endl;
        cout << "2. Least Common Multiple." << "\n" << endl;
        cout << "Input -1 to exit the program." << endl;
        cin >> num; //gets a user input for num
        cout << "\n"; //adds a line of spacing

        if (num == 1){ //checks if num is equal to 1
            cout << "Input the first non-negative, common divisor number: " << endl;
            cin >> A; //gets a user input for A
            cout << "Input the second non-negative, common divisor number: " << endl;
            cin >> B; //gets a user input for B
            cout << "\n";

            GCDFunc(A, B, 0); //calls the GCD function
        }
        else if (num == 2){ //checks if num is equal to 2
            cout << "Input the first non-negative, least common multiple number: " << endl;
            cin >> A; //gets a user input for A
            cout << "Input the second non-negative, least common multiple number: " << endl;
            cin >> B; //gets a user input for B
            cout << "\n";

            LCMFunc(A, B); //calls the LCM function
        }
    }
    cout << "The program is now ending..." << endl; //end program statement
}

int main(){
    MenuFunc(); //menu function call
return 0;
}
