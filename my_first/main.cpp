#include <iostream>

using namespace std;

float num = 42, a, b;
auto& sorokdwa = num;

void GimmeSomeTrash(string SayPlease) {
	if (SayPlease == "Please" or SayPlease == "please") {
		cout << "yooooo\narbuz\ndesat\nдесять\n" << sorokdwa << endl;
	} else {
		cout << "No please, no trash, my friend ;)" << endl;
	}
}

void GiMmETheANswErNOOOW(string arbuz, float first, float second) {
	float answer;
	if (arbuz == "+") {
		answer = { first + second };
	} else if (arbuz == "-") {
		answer = { first - second };
	} else if (arbuz == "*") {
		answer = { first * second };
	} else if (arbuz == "/") {
		answer = { first / second };
	} else {
		cout << "whaaat" << endl;
		answer = 42.4242;
	}
	cout << "your answer is " << answer << endl;
}

int main() {
	setlocale(LC_ALL, "RU");

	string operatatatator;
	string UserPlease;

	cout << "say please for some trash:"; cin >> UserPlease; cout << endl;

	GimmeSomeTrash(UserPlease);
	cout << "введи число в переменную A:"; cin >> a; cout << endl;
	cout << "введи число в переменную B:"; cin >> b; cout << endl;
	cout << " A:" << a << " B:" << b << endl;
	cout << "what do you want to do with them? (+|-|*|/):"; cin >> operatatatator; cout << endl;
	GiMmETheANswErNOOOW(operatatatator, a,b);

	// BREAKING NEWS!!!!!! THIS IS THE END OF POTATOS??????WATERMELON HAS A BOMB!!!!!!
	// 🍉😈💣💣💣💣 <-- this is watermelon					this is potato army -->🔫🥔🔫🥔🔫🥔

	return 0;
}
