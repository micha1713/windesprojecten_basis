// opdracht 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>

int K;
int A, B;

int main()
{
    printf_s("Kies of je een getal in een tweede of derde macht wilt doen type 2 voor tweede macht en 3 voor derde macht:");
    scanf_s("%d", &K);
    if (K == 2) {
        printf_s("type een nummer om in het kwadraad ^2 te doen:");
        scanf_s("%d", &A);
        B = A * A;
        printf_s("de tweede macht van %d is %d", A, B);
    }
    else if (K == 3) {
        printf_s("type een nummer om in de derde macht ^3 te doen:");
        scanf_s("%d", &A);
        B = A * A * A;
        printf_s("De derde macht van %d is %d", A, B);
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
