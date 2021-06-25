#include<iostream>
#include<math.h>
#define f(x) pow(x,3)-4*x+1 // x^3-4X + 1
#define E 0.001
using namespace std;
int main()
{
	 float x0, x1, x2, f0, f1, f2;
	 int step = 1;
	 
	 up:
	 cout << "\n\tEnter two initial guesses:\n";
	 cin >> x0 >> x1;
	 
	 /* Calculating Functional Value */
	 f0 = f(x0);
	 f1 = f(x1);
	 /* Checking whether given guesses brackets the root or not. */
	 if( f0 * f1 > 0.0)
	 {
		  cout << "\t Incorrect Initial Guesses.\n";
		  goto up;
	 }
   /* Implementing Bisection Method */
	 cout << "\n\tStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n";
	 do
	 {
		  x2 = (x0 + x1)/2;
		  f2 = f(x2);
		
		  cout << "\n\t"<<step<<"\t\t"<<x0<<"\t\t"<<x1<<"\t\t"<<x2<<"\t\t"<<f2;
		
		  if( f0 * f2 < 0)
		  {
			   x1 = x2;
			   f1 = f2;
		  }
		  else
		  {
			   x0 = x2;
			   f0 = f2;
		  }
		  step = step + 1;
	 }while(fabs(f2)>E);
	 printf("\n\n\t *** Root is: %f", x2);
	 return 1;
}
