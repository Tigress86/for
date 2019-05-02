#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main(void) {
	int count = 0;

	for (int n=0;n<=10;n++) {
		for (int j=0;j<=10;j++) {
			for (int k=0;k<=10;k++) {
				count++;
				cout << n << ":" << j << ":" << k << "\tµÚ" << count << "´Î" <<endl;
			}
		}
	}
	
	system("pause");
	return 0;
}