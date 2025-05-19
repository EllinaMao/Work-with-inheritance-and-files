#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>


/*
Создайте иерархию классов по работе с файлами. Базовый класс умеет открывать файл
и отображать его содержимое в консоль,
Для отображения содержимого файла в базовом классе определена виртуальная функция:
void Display(const char * path)
path – путь к файлу
*/
class Base {
public:
	virtual ~Base() = default;

	virtual void Display(const char* path);

};
