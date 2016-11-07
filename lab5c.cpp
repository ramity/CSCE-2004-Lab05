#include <iostream>
#include <iomanip>  // needed for setw
using namespace std;
int main()
{
   int size = 12;
   for (int outer = 1; outer <= size; outer = outer + 1)
   {
      for (int inner = 1; inner <= size; inner = inner + 1)
      {
         cout << setw(5) << inner * outer << " ";
      }
      cout << endl;
   }
   return 0 ;
}

