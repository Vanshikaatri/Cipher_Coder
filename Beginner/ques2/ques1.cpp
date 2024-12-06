# include <iostream>
using namespace std;

int main(){
    int first, second, third;

    cout << "Enter the first number: ";
    cin >> first;

    cout << "Enter the second number: ";
    cin >> second;

    cout << "Enter the third number: ";
    cin >> third;

    
    int answer;
    if (first > second && first > third){
        answer = first;
    }
    else if (second > first && second > third){
        answer = second;
    }
    else{
        answer = third;
    }
    cout << "The largest number is: "<<answer;
    




}