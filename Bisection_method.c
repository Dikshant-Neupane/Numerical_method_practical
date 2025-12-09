#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x*x-2*x-5
 int main()
 {
 	float x1,x2,x0,err=0.0001;
 	float fx1,fx2,fx0;
 	printf("\nEnter the initial guesses x1 and x2\n");
 	printf("x1=");
 	scanf("%f",&x1);
 	printf("\nx2=");
 	scanf("%f",&x2);
 	
 	fx1=f(x1);
 	fx2=f(x2);
 
 	printf("\nf(%f)=%f",x1,fx1);
 	printf("\nf(%f)=%f",x2,fx2);
 	int count=1;
 	if ((fx1*fx2)<0)
 		{
 			
 			
 			
 			
 			do
 				{
 					x0=(x1+x2)/2;
 					fx0=f(x0);
 					if((fx0*fx1)<0)
 					{
 						x2=x0;
 						fx2=fx0;
					 }
					else
					{
 						x1=x0;
					 fx1=fx0;
					 }
					 count++;
					 printf("\n\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t",x1,x2,x0,fx1,fx2,fx0);
					}
					  while(fabs(x2-x1)>err);//here fabs acts as a modulus.
			printf("\n\n\tThe required root is:%f",x0);
			printf("\n\n\tThe number of iteration is: %d",count);
			
	 	}
	 else
	   {
	 	printf("\n\tThe root is not within the bracket.");
		  }	 
 	getch();
 	return 0;
 }