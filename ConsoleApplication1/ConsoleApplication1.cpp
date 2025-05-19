#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

#include "base.h"
#include "AsciiDisplay.h"
#include "BinaryDisplay.h"

using namespace std;
/*
Виртуальные функции
Задание
Создайте иерархию классов по работе с файлами. Базовый класс умеет открывать файл и отображать его содержимое в консоль, первый класс потомка открывает файл и отображает содержимое в виде ASCII-кодов символов, расположенных в файле, второй класс потомка открывает файл и показывает его содержимое в двоичном виде и т.д.

Для отображения содержимого файла в базовом классе определена виртуальная функция:

void Display(const char * path)

path – путь к файлу

Потомки создают свою реализацию виртуальной функции.*/
int main() {
    Base* base = new Base();
    Base* ascii = new AsciiDisplay();
    Base* binary = new BinaryDisplay();

    const char* path = "Example.txt";
    try {

    base->Display(path);
    ascii->Display(path);
    binary->Display(path);

    }
    catch (const system_error&e) {
		cout << "System error occurred: " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "Exception occurred: " << e.what() << endl;
    }
	catch (...) {
		cout << "Unknown error occurred." << endl;
	}

    delete base;
    delete ascii;
    delete binary;

    return 0;
}
