#include <iostream>
#include <stdio.h>
using namespace std;

struct simpleCalculator{
     float num1, num2;
     char ops;

     // Function to perform addition
     float plus() {
          return num1 + num2;
     }

     // Function to perform subtraction
     float minus() {
          return num1 - num2;
     }

     // Function to perform multiplication
     float multiply() {
          return num1 * num2; 
     }

     // Function to perform division
     float divide() {
          if (num2 != 0) {
               return num1 / num2;
          } else {
               cout << "Infinity";
               return 0;
          }
     }
};

int main() {
     simpleCalculator data;

     // Banner
     cout << "The calculator only operates addition, subtraction, multiplication, and division.\n"
          << "(+\t-\tx\t:)\n\n";

     // Get user input
     cout << "Enter the first number  = ";   cin >> data.num1;
     cout << "The Operators           = ";   cin >> data.ops;
     cout << "Enter the second number = ";   cin >> data.num2;

     // Perform the operation based on user input
     switch (data.ops) {
          case '+':
               cout << "\tResult\t\t= " << data.plus() << endl;
               break;
          case '-':
               cout << "\tResult\t\t= " << data.minus() << endl;
               break;       
          case '*':
               cout << "\tResult\t\t= " << data.multiply() << endl;
               break;
          case '/':
               cout << "\tResult\t\t= " << data.divide() << endl;
               break;
          default:
               cout << "Error: Invalid operation!" << endl;
               break;
    }

    return 0;
}
