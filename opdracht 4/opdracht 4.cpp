// opdracht 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int A, B, C;

int main()
{
    printf_s("type 3 integers in om te zien welke groter is");
    scanf_s("%d %d %d", &A, &B, &C);
    if (A >= B && A >= C) {
        printf_s("Getal A is de grootste: %d\n", A);
    }
    else if (A <= B && B >= C) {
        printf_s("getal B is de grootste: %d\n", B);
    }
    else {
        printf_s("getal C is de grootste: %d\n", C);
    }
    


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
