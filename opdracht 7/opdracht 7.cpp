// opdracht 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

float radius, oppervlakte, omtrek;
float const pi = 3.14159265358979323;

int main()
{
    printf_s("voer de radius in om te beginnen met de berekening:");
    scanf_s("%f", &radius);
    omtrek = 2 * pi * radius;
    oppervlakte = pi * radius * radius;
    printf_s("de omtrek is afgerond %.2f\n", omtrek);
    printf_s("de oppervlakte is afgerond ongeveer %.2f\n", oppervlakte);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
