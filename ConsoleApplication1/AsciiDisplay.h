#pragma once
#include "base.h"
/*первый класс потомка открывает файл и отображает содержимое в виде ASCII-кодов символов,
расположенных в файле,
*/
class AsciiDisplay :
    public Base
{
public:

	void Display(const char* path) override;

};

