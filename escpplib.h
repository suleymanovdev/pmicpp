/*
MIT License

Copyright (c) 2022 Elvin Suleymanov

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

// Includes
#include <iostream>
#include <string>

class IntList
{
private:
    int size;
    int* array = new int[size];
public:
    IntList()
    {
        size = 0;
    }

    void show()
    {
        std::cout << "[escpplib] ====INDEX====DATA===================== [Made With \u2764!]" << std::endl;

        for (int i = 0; i < size; i++)
        {
            std::cout << "                 " << i << "      " << array[i] << std::endl;
        }
    }

    void add(int value)
    {
        int* temp = new int[size];
        for (int i = 0; i < size; i++)
        {
            temp[i] = array[i];
        }
        size++;
        delete[] array;
        array = temp;
        array[size-1] = value;
    }
};

// Termnal Colors.
std::string termc(std::string color)
{
    if (color == "black") { return "\033[30m"; }
    else if (color == "red") { return "\033[31m"; }
    else if (color == "green") { return "\033[32m"; }
    else if (color == "brown") { return "\033[33m"; }
    else if (color == "blue") { return "\033[34m"; }
    else if (color == "magenta") { return "\033[35m"; }
    else if (color == "cyan") { return "\033[36m"; }
    else if (color == "lightgray") { return "\033[37m"; }
    else { return "\033[30m"; }
}

// Get INT Function.
int gint(std::string message)
{
    if (message != "")
    {
        std::cout << message;
    }
    int temp_int;
    std::cin >> temp_int;

    return temp_int;
}

// Get STRING Function.
std::string gstr(std::string message)
{
    if (message != "")
    {
        std::cout << message;
    }
    std::string temp_str;
    getline(std::cin, temp_str);

    return temp_str;
}

// Get INT Function with print.
int gintwp(std::string message)
{
    if (message != "")
    {
        std::cout << message;
    }
    int temp_int;
    std::cin >> temp_int;
    std::cout << temp_int;

    return temp_int;
}

// Get STRING Function with print.
std::string gstrwp(std::string message)
{
    if (message != "")
    {
        std::cout << message;
    }
    std::string temp_str;
    std::cin.ignore();
    getline(std::cin, temp_str);
    std::cout << temp_str;

    return temp_str;
}

// Change Two Numbers Function.
template <class mv>
void mvdata(mv& a, mv& b)
{
    mv temp = a;
    a = b;
    b = temp;
}

// Print Line Function.
template <class prlnType>
void prln(prlnType data)
{
    std::cout << data << std::endl;
}

// Print Function.
template <class prType>
void pr(prType data)
{
    std::cout << data;
}

// Clear Function.
void clear(std::string system_name)
{
    if (system_name == "win" || system_name == "windows" || system_name == "Windows")
    {
        system("cls");
    }
    else if (system_name == "lin" || system_name == "linux" || system_name == "Linux")
    {
        system("clear");
    }
    else
    {
        std::cout << "Pls, enter system name like 'win' or 'lin'!" << std::endl;
    }
}

// Print Array Function.
template <class prarrType>
void prarr(prarrType array[], int size)
{
    std::cout << "[escpplib] ====INDEX====DATA===================== [Made With \u2764!]" << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << "                 " << i << "      " << array[i] << std::endl;
	}
}

// Made With ❤!
