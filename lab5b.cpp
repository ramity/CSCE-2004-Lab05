#include <iostream>
using namespace std;
int main()
{
   // Get number from user
   int input = 0;
   cout << "Enter a number:\n";
   cin >> input;

   // Print numbers from [1..input]
   for (int num = 1; num <= input; num = num + 1)
      cout << num << " ";
   cout << endl;

   for (int num = 0; num < input; num++)
   {
      if(num % 2 == 0)
      {
         cout << num << " ";
      }
   }
   cout << endl;

   for (int num = input - 1; num > 0; num--)
   {
      if(num % 2 == 1)
      {
         cout << num << " ";
      }
   }
   cout << endl;

   return 0 ;
}
