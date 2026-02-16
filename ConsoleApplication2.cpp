#include <iostream>;
using namespace std;
int add(int a, int b) {
	return a + b;
}
int subtract(int a, int b) {
	return a - b;
}
int mnozh(double a, double b) {
	return a * b;
}
int del(double a, double b) {
	return a / b;
}
int main() {
	setlocale(LC_ALL, "ru");
	cout << "=== КАЛЬКУЛЯТОР v1.0 === " << endl;
	cout << "Доступные операции : +, -, *, /" << endl;
	int a, b;
	char op;
	cout << " Введите выражение(например: 5 + 3) : " << endl;
	cin >> a >> op >> b;
	if (op == '+') {
		cout << "Результат: " << add(a, b) << endl;
	}
	else if (op == '-') {
		cout << " Результат: " << subtract(a, b) << endl;
	}
	else if (op == '*') {
		cout << " Результат: " << mnozh(a, b) << endl;
	}
	else if (op == '/') {
		cout << " Результат: " << del(a, b) << endl;
	}
	else {
		cout << " Ошибка: неподдерживаемая операция! " << endl;
	}
	return 0;
}