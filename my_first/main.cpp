#include <iostream>

using namespace std;

int num = 42, a, b;
auto& sorokdwa = num;

void GimmeSomeTrash(string SayPlease) {
	if (SayPlease == "Please" or SayPlease == "please") {
		cout << "yooooo\narbuz\ndesat\nдесять\n" << sorokdwa << endl;
	}
	else {
		cout << "No please, no trash, my friend ;)" << endl;
	}
}

int main() {
	setlocale(LC_ALL, "RU");
	string UserPlease;
	cout << "say please for some trash:"; cin >> UserPlease; cout << endl;

	GimmeSomeTrash(UserPlease);
	cout << "введи число в переменную A:";
	cin >> a; cout << endl;
	cout << "введи число в переменную B:";
	cin >> b; cout << endl;
	cout << " A:" << a << " B:" << b << endl;
	// BREAKING NEWS!!!!!! THIS IS THE END OF WATERMELONS?????? POTATOES STARTS A WAR!!!!!
	// 🍉 <-- this is watermelon							this is potato army -->🔫🥔🔫🥔🔫🥔

	return 0;
}
