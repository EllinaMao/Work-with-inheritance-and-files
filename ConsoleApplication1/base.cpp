#include "base.h"
using namespace std;

void Base::Display(const char* path)
{
    ifstream file(path);
    if (!file.is_open()) {
		throw system_error(errno, system_category(), "Error opening file: " + string(path));
    }

    cout << "Contents of the file:" << endl;
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    
	cout << string(15, '-') << endl;
    file.close();
}
