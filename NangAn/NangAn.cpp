
#include <iostream>
using namespace std;

void out (int a)
{
	cout << a;
}

void qw(int a, int b)
{
	out(a + b);
}

void qwe (int a, int b)
{
	out(a - b);
}

void qwer(int a, int b)
{
	out(a * b);
}

void qwq (int a, int b)
{
	out(a / b);
}

void qwqw (int a, int b)
{
	out(a % b);
}

void asdf(int a, int b, char c)
{
	switch (c) {
	case '+':
		qw(a, b);
		break;
	case '-':
		qwe(a, b);
		break;
	case '*':
		qwer(a, b);
		break;
	case '/':
		qwq(a, b);
		break;
	case '%':
		qwqw(a, b);
		break;
	}
}

int main()
{
	int a, b;
	char c;

	do {
		cin >> a >> c >> b;
		asdf (a, b, c);
		
	} while ('e' != c);
	return 0;
}
