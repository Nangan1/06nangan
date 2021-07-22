
#include <iostream>
using namespace std;

int main()
{
	char a[3];
	int b;

	do {
		cin >> a[0];
		cin >> a[1];
		cin >> a[2];

		switch (a[1]) {
		case '+': 
			b = (a[0] - 48) + (a[2] - 48);
			cout << b;
			break;
		case '-':
			b = (a[0] - 48) - (a[2] - 48);
			cout << b;
			break;
		case '*':
			b = (a[0] - 48) * (a[2] - 48);
			cout << b;
			break;
		case '/':
			b = (a[0] - 48) / (a[2] - 48);
			cout << b;
			break;
		default:
			return 0;
		}
	} while ('e' != a[0] && 'e' != a[1] && 'e' != a[2]);
	return 0;
}
