#include <iostream>

using namespace std;

void GCDFunc(long long int A, long long int B){

    long long int r, GCD;

    while (r > 0){
        if (A > B){
            r = A % B;

            A = B;
            B = r;
            GCD = A;
        }
        else {
            r = B % A;

            B = A;
            A = r;
            GCD = B;
        }
    }
    cout << GCD << endl;
}

int main(){

    long long int A, B;

    cout << "Input the first common divisor number: " << endl;
    cin >> A;
    cout << "Input the second common divisor number: " << endl;
    cin >> B;
    cout << "\n";

    GCDFunc(A, B);

return 0;
}
