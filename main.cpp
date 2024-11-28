#include <iostream>

using namespace std;

int main()
{
   const int SIZE = 6;
   double arr[SIZE];
   double company_income = 0;

   for (int i = 0; i < SIZE; i++)
   {
       cout << "Enter the firm's revenue for month " << (i + 1) << " ->" << endl;
       cin >> arr[i];

       while (arr[i] < 0)
       {
           cout << "Revenue cannot be negative. Please re-enter -> " << endl;
           cin >> arr[i];
       }
   }
//I can put it in one loop, but it will be better for code readability, although I don't know about optimization.
   for (int i = 0; i < SIZE; i++)
   {
       company_income += arr[i];
   }

    cout << "\nTotal company income for 6 months: " << company_income << endl;

    return 0;
}