#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	 float x[100], y[100], xp, yp=0, p;
	 int i,j,n;
	
	 cout<<"Enter number of data: ";
	 cin>>n;
	 cout<<"\n\t Enter data *** \n\n";
	 
	 for(i=1;i<=n;i++)
	 {
		  cout<<"\t x["<<i<<"] =";
		  cin>>x[i];
		  cout<<"\t y["<<i<<"] =";
		  cin>>y[i];
		  cout<<"---------- \n";
	 }
	 
	 cout<<"\n\tEnter interpolation point: ";
	 cin>>xp;
	 
	
	 for(i=1;i<=n;i++)
	 {
		  p=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  yp = yp + p * y[i];
	 }
	 cout<<"\n\t *** Interpolated value at "<<xp<<" is "<<yp;
	 return 1;
}
