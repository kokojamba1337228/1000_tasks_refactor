#include <iostream>
#include <cmath>
#include <algorithm>
#include "ifs_fors_whiles.h"
#include "refactor.h"

double series_1(double* a, int size) {
    double result = 0;
    for (size_t i = 0; i < size; i++)
    {
        result += a[i];
    }
    return result;
}

int main()
{
    /*h(1, 10, 0, [](int acam, int value)
        {std::cout << value << " "; return 0; });*/   //1
    /*std::cout << h(0.0, 10.0, 0.0, [](double acam, double value)
        {return acam += ((pow(2, value * 2) / fact(value * 2)) * pow(-1, value)); });*/ //2
    /*std::cout << h(1, 3, 0, [](int acam, int value)
        {return acam += pow(5, value); });*/    //17
    /*std::cout << h(1, 3, 0, [](int acam, int value)
        {return acam += (pow(5, value))*pow(-1, value + 1); });*/   //18
    /*std::cout << h(1, 5, 1, [](int acam, int value)
        {return acam *= value; });*/    //19
    /*std::cout << h(1, 4, 0, [](int acam, int value)
        {return acam += fact(value); });*/  //20
    /*std::cout << h(0, 3, 0, [](double acam, int value)
        {return acam += (1/fact(value)); });*/  //21
    /*std::cout << h(0, 3, 0, [](int acam, int value)
        {return acam += pow(4, value)/fact(value); });*/  //22
    /*std::cout << h(0, 3, 0, [](double acam, int value)
        {return acam += (pow(2, value*2 + 1)/fact(value)) * pow(-1, value); });*/  //23
    /*std::cout << h(0.0, 10.0, 0.0, [](double acam, double value)
        {return acam += ((pow(2, value*2)/fact(value * 2)) * pow(-1, value)); });*/  //24
    /*std::cout << h(1.0, 10.0, 0.0, [](double acam, double value)
        {return acam += ((pow(0.5, value)/value) * pow(-1, value)); });*/  //25
    /*std::cout << h(0.0, 1.0, 0.0, [](double acam, double value)
        {return acam += ((pow(0.5, value * 2 + 1) / (value * 2 + 1)) * pow(-1, value)); });*/  //26
/*    std::cout << h(1.0, 2.0, 0.5, [](double acam, double value)
        {return acam += (((value * 2 - 1) * pow(0.5, 2 * value + 1)) /
            ((value * 2)*(2 * value + 1))); });*/  //27
    std::cout << h(1.0, 2.0, 0.5, [](double acam, double value)
        {return acam += (((value * 2 - 1) * pow(0.5, 2 * value + 1)) /
            ((value * 2) * (2 * value + 1))); });  //29
}