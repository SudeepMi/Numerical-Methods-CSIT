using namespace std;
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define E 0.001
#define f(x) pow(x,3)-4*x+1 // x^3-4X + 1
#define  df(x)  3*pow(x,2)-4 // 3X^2-4


int main()
{
	 float x0, x1, f0, f1, df0, e;
	 int step = 0;

	
     /* Inputs */
	 cout << "\nEnter initial guess:\n";
	 cin >> x0;
	 
	 /* Implementing Newton Raphson Method */
	 cout<< "\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n"; // step	x0	f(x0)	x1	f(x1)
	 do
	 {
		  f0 = f(x0);
		  df0 = df(x0);
		  if(df0 == 0.0)
		  {
			   cout << "Mathematical Error.";
			   exit(0);
		  }

		
		  x1 = x0 - f0/df0;
		  cout<<"\n"<<step<<"\t\t"<<x0<<"\t\t"<<f0<<"\t\t"<<x1<<"\t\t"<<f1;
		  x0 = x1;

		  step = step+1;
		  
		  f1 = f(x1);
		  
	 }while(fabs(f1)>E);
	
	 cout << "\nRoot is:" << x1;
	 return 0;
}
