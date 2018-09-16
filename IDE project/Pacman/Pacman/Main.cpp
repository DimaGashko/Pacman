#include <iostream>

using namespace std;

int main() {
	int n = 0;
	while (1) {
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 10; j++) {
				cout << n % 10;
			}

			cout << endl;
		}

		system("cls");
		n++;
	}
	system("pause");

	return 0;
}