#include "BinaryDisplay.h"
using namespace std;
void BinaryDisplay::Display(const char* path)
{
	ifstream file(path, ios::binary);
	if (!file.is_open()) {
		throw system_error(errno, system_category(), "Error opening file: " + string(path));
	}
	cout << "File content in binary format:" << endl;
	char ch;
	while (file.get(ch)) {
		for (int i = 7; i >= 0; --i) {
			cout << ((ch >> i) & 1);
		}
		cout << " ";
	}
	cout << endl << string(15, '-') << endl;
	file.close();
}
