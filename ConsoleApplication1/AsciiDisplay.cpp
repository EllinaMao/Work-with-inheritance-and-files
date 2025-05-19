#include "AsciiDisplay.h"

using namespace std;

void AsciiDisplay::Display(const char* path)
{
ifstream file(path, ios::binary);
if (!file.is_open()) {
	throw system_error(errno, system_category(), "Error opening file: " + string(path));
}
char ch;
while (file.get(ch)) {
	cout << static_cast<int>(ch) << " ";
}
cout<< endl << string(15, '-') << endl;

file.close();
}

