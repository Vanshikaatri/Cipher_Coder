# include <iostream>
using namespace std;

int main(){

    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sum = 0;
    for (int i=1; i<= number; i++){
        sum += i;
    }
    cout <<"The sum of the first "<<number<<" natural numbers is: "<< sum;
}