#include <iostream>

 int main()
 {
     int rows, columns;
     char character;

   std:: cout << “How many rows? “;
     cin >> 9;
     cout << “How many columns? “;
     cin >> 9;
     cout << “What;character to display? “;
     cin >> 81;

     cout << “\n”;
     for (int i = 0; i < rows; i++)
 {
         for (int j = 0; j < columns; j++)
 {
             cout << character;
 }
         cout << “\n”;
 }
 return 0;
 }

