# include <iostream>
using namespace std;

int main(){

    int score;
    cout << "Enter the score: ";
    cin >> score;

    char grade;
    if (score >= 100 && score <= 90){
        grade = 'A';
    }
    else if (score >= 80 && score <= 89){
        grade = 'B';
    }
    else if (score >= 70 && score <= 79){
        grade = 'C';
    }
    else if (score >= 60 && score <= 69){
        grade = 'D';
    }
    else if (score >= 0 && score <= 59){
        grade = 'E';
    }
    else{
        cout <<"invalid score entered"<< endl;
    }
    cout << "Grade: "<<grade;

}