#include<iostream>
#include<conio.h>

using namespace std;

int add (int x, int y)
{
	return (x+y);
}


int subtract (int x, int y)
{
    return (x-y);
}

int multiply (int x, int y)
{
    return (x*y);
}

float divide (int x, int y)
{
    return (x/y);
}

int mod (int x, int y)
{
    return (x%y);
}

 int main()
 {
     int x, y, operation;
     char i;
     i = 'y';
     while (i == 'y' || i == 'Y')
     {
     cout << "Menu:" << endl;
     cout << "1. Add" << endl;
     cout << "2. Subtract" << endl;
     cout << "3. Multiply" << endl;
     cout << "4. Divide" << endl;
     cout << "5. Modulus" << endl;
     cin >> operation;
     cout << "Enter 1st integer" << endl;
     cin >> x;
     cout << "Enter second integer" << endl;
     cin >> y;
     
     switch (operation)
     {
         case 1:
         cout << "The sum of the two integers is: " << add(x,y) << endl;;
         cout << "Press Y to continue: ";
         cin >> i;
         break;
         
         case 2:
         cout << "The difference of the two integers is: : " << subtract(x, y) << endl;;
         cout << "Press Y to continue: ";
         cin >> i;
         break;
         
         case 3:
         cout << "The product of the two integers: " << multiply(x, y) << endl;;
         cout << "Press Y to continue: ";
         cin >> i;
         break;
         
         case 4:
         cout << "The quotient of the two integers: " << divide(x, y) << endl;;
         cout << "Press Y to continue: ";
         cin >> i;
         break;
         
         case 5:
         cout << "The result is: " << mod(x, y) << endl;;
         cout << "Press Y to continue: ";
         cin >> i;
         break;
         
         default:
         cout << "See you again";
     }
     }
     
     return 0;
 }
