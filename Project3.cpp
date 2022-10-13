/*
Programming Project 3
-----------------------------
Write a program that will act as a basic calculator. This program should take two integers and the operator (+, -, *, /)
and output the answer to the output screen. In the case of the denominator being zero, output an error.

Author: Matthew Glavosek
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	//Declaring the variables
	int num1, num2, ans;
	char oper, restart;
	
	restart = 'Y';
	
	//Creating the loop to have the user keep restarting if they want to
	while (restart == 'Y'){
		//Prompting the user to enter in their operation
		cout << "Please input your basic operation: " << endl;
		cin >> num1 >> oper >> num2;
		
		//Choosing which calculations to perform based on the users' input
		switch(oper){
			case '+':
				ans = num1 + num2;
				cout << "Your answer is: " << ans << endl;
				break;
			case '-':
				ans = num1 - num2;
				cout << "Your answer is: " << ans << endl;
				break;
			case '*':
				ans = num1 * num2;
				cout << "Your answer is: " << ans << endl;
				break;
			case '/':
				if (num2 != 0){
					ans = num1 / num2;
					cout << "Your answer is: " << ans << endl;
				} else {
					cout << "You cannot divide by zero! Please try again." << endl;
				}
				break;
			case '^':
				ans = pow(num1, num2);
				cout << "Your answer is: " << ans << endl;
				break;
			default:
				cout << "I am sorry, try a different operation!" << endl;
				break;
		}
		//Asking the user if they want to run the program again
		cout << "Would you like to do another calculation? Enter Y or N" << endl;
		cin >> restart;
		
	}
	
	//Prompting the user that the program is ending
	cout << "Thank you! Goodbye.";
	
	return 0;
}
