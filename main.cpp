#include <iostream>

using namespace std;

int fibR(int n)
{
   //cout << n << endl;
   if(n < 1)
   {
      return 0;
   }
   if((n == 1) || (n == 2))
   {
      return 1;
   }
   return fibR(n - 1) + fibR(n - 2);
}

int fibL(int n)
{
   if (n == 0)
   {
      return 0;
   }
   
   int sum = 1;
   int temp1 = 1;
   int temp2 = 0;
   for (int i = 1; i < n; i++)
   {
      sum = temp1 + temp2;
      temp2 = temp1;
      temp1 = sum;
   }
   
   return sum;
}

int facR(int n)
{
   if(n == 0)
   {
      return 1;
   }
   return n * facR(n - 1);
}

int facL(int n)
{
   int prod = 1;
   for (int i = 1; i <= n; i++)
   {
      prod*=i;
   }
   return prod;
}

int main()
{
   cout << "Fibonacci Sequence (Recursive) : ";
   for(int i = 0; i < 10; i++)
   {
      cout << fibR(i) << " ";
   }
   cout << "\nFibonacci Sequence (Loop)      : ";
   for(int i = 0; i < 10; i++)
   {
      cout << fibL(i) << " ";
   }
   cout << "\n\nFactorials (Recursive)         : ";
   for(int i = 0; i < 10; i++)
   {
      cout << facR(i) << " ";
   }
   cout << "\nFactorials (Loop)              : ";
   for(int i = 0; i < 10; i++)
   {
      cout << facL(i) << " ";
   }
   cout << endl;
   return 0;
}
