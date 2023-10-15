#include <iostream>
using namespace std;

int main()
{
     // Seconds to Minutes
     float sec, mins;
     cout << "Enter seconds: ";
     cin >> sec;
     mins = sec / 60;
     cout << "Minutes: " << mins << endl
          << endl;

     // Meters to Kilometers
     float m, km;
     cout << "Enter meters: ";
     cin >> m;
     km = m / 1000;
     cout << "Kilometers: " << km << endl
          << endl;

     // Celsius to Fahrenheit
     float celsius, fahrenheit;
     cout << "Enter temperature in Celsius: ";
     cin >> celsius;
     fahrenheit = (celsius * 9 / 5) + 32;
     cout << "Temperature in Fahrenheit: " << fahrenheit << endl
          << endl;

     // Kilograms to Pounds
     float kilograms, pounds;
     cout << "Enter weight in kilograms: ";
     cin >> kilograms;
     pounds = kilograms * 2.20462;
     cout << "Weight in pounds: " << pounds << endl
          << endl;

     // Centimeters to Inches
     float centimeters, inches;
     cout << "Enter length in centimeters: ";
     cin >> centimeters;
     inches = centimeters / 2.54;
     cout << "Length in inches: " << inches << endl
          << endl;

     // Liters to Milliliters
     float liters, milliliters;
     cout << "Enter volume in liters: ";
     cin >> liters;
     milliliters = liters * 1000;
     cout << "Volume in milliliters: " << milliliters << endl
          << endl;

     // Kanals to Square Feet
     float kanals, squareFeet;
     cout << "Enter area in kanals: ";
     cin >> kanals;
     squareFeet = kanals * 5445;
     cout << "Area in square feet: " << squareFeet << endl
          << endl;

     return 0;
}
