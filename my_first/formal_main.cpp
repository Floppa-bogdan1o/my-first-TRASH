#include <iostream>
//v0.6 Formal Version
using namespace std;

//Function to print the word "Trash"
void PrintTrash(string SayPlease) {
	if (SayPlease == "Please" || SayPlease == "please") {
		cout << "Trash" << endl;
	}
	else {
		cout << "Wrong input, expected 'Please' or 'please'" << endl;
	}
}

//Function to calculate 2 variables with + - * /
void Calculate(string arithmetic_operator, float first, float second) {
	float answer;
	if (arithmetic_operator == "+") {
		answer = first + second;
	} else if (arithmetic_operator == "-") {
		answer = first - second;
	} else if (arithmetic_operator == "*") {
		answer = first * second;
	} else if (arithmetic_operator == "/" && second != 0) {
		answer = first / second;
	} else if (arithmetic_operator == "/" && second == 0) {
		cout << "ERROR:division by 0 is not possible" << endl;
		return;
	} else {
		cout << "ERROR: Invalid arithmetic operator entered, expected '+' or '-' or '*' or '/', your input: '" << arithmetic_operator  << "'" << endl;
		return;
	}
	cout << "Your answer: " << answer << endl;
}

//Interaction with user
int main() {

	float user_input_variable_a, user_input_variable_b;
	string user_input_operator, user_input_please;

	cout << "Enter 'please' for trash:"; cin >> user_input_please; cout << endl;

	PrintTrash(user_input_please);
	cout << "Enter the number into variable A:"; cin >> user_input_variable_a; cout << endl;
	cout << "Enter the number into variable B:"; cin >> user_input_variable_b; cout << endl;
	cout << " A=" << user_input_variable_a << "; B=" << user_input_variable_b << endl;
	cout << "Enter the arithmetic operator (+|-|*|/):"; cin >> user_input_operator; cout << endl;
	Calculate(user_input_operator, user_input_variable_a, user_input_variable_b);

	return 0;
}
