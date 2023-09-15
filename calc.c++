#include <iostream>
using namespace std;
//function to perform calculations
void calculate(double num1, double num2, string operatorUsed){
    if(operatorUsed == "+"){
        cout << "The sum is " << (num1 + num2) << "\n";
    }else if(operatorUsed == "-"){
        cout << "The difference is " << (num1 - num2) << "\n";
    }else if(operatorUsed == "/"){
        cout << "The division is " << (num1 / num2) << "\n";
    }else if(operatorUsed == "*"){
        cout << "The multiplacation is " << (num1 * num2) << "\n";
    }else {
        cout << "Invalid operator";
    }
};

int main(){
    cout << "CONSOLE CALCULATOR" << "\n";
    cout << "------------------" << "\n";
    double num1,num2,answer;
    string operatorUsed;
    cout << "Enter the value of the first number: ";
    cin >> num1;
    //if statement ot check whether the input is a number
    if(isdigit(num1) == false ){
        cout << "Enter a valid number";
    }else if(isdigit(num2) == false){
        cout << "Enter the value of the second number: ";
        cin >> num2;
        cout << "Enter a valid number";
    }else {
        cout << "Enter the operator of use (+ , / , - , * , %): ";
        cin >> operatorUsed;
        calculate(num1,num2,operatorUsed);
    }
    return 0;
}