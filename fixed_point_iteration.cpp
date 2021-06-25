/*
Author: Sudeep Mishra
*/

#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

#define   f(x)    pow(x,3)-4*x+1 // x^3-4X + 1
#define   g(x)   (pow(x,3)+1)/4 // (X^3 + 1)/4
#define E 0.0001
using namespace std;
int main()
{
	 int step=1,N,stop=0;
	 float x0, x1,re=0;
	 cout<< setprecision(6)<< fixed;
	 /* Inputs */
	 cout<<"Enter initial guess: ";
	 cin>>x0;
	 
	 cout<<"Enter maximum iteration: ";
	 cin>>N;
	 


	 /* Implementing Fixed Point Iteration */
	 cout<< endl<<"**************************"<< endl;
	 cout<<"Fixed Point Iteration Method"<< endl;
	 cout<<"\n\t Iteration \t\t x1 "<< endl;
	 do
	 {
		  x1 = g(x0);
		  re = fabs((x1-x0)/x1);
		  cout<<"\n\t"<< step<<"\t\t"<< x1 <<"\t\t"<< endl;
		  step = step + 1;

			if(re<E){
		  		stop=1;
		  		break;
		  	}else{
		  		 x0 = x1;
			}
			
			 if(step>N)
			  {
				   cout<<"Not Convergent.";
				   exit(0);
			  }


	 }while( stop!=1);

	 cout<< endl<<"Root is "<< x1;
	  cout<< endl<<"Relative error is "<< re;

	 return(0);
}
