// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int leeftijd = 18;

int main()
{
    printf_s("hoe oud ben je in jaren?");
    scanf_s("%d", &leeftijd);
    printf_s("je leeftijd is %d maanden", leeftijd * 12);
}

