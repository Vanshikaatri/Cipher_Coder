# include <iostream>
using namespace std;

int main(){

    int number;
    cout << "Enter a number: ";
    cin >> number;

    int factorial = 1;
    for (int i=1; i<= number; i++){
        factorial *= i;
    }

    cout <<"The factorial of "<<number<<" is: "<<factorial;


}