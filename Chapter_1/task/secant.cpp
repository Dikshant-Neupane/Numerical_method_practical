
#include<stdio.h>

#include<math.h>
#define f(x) x*x*x-2*x-5
 int main()
 {
 	float x1,x2,x0,err=0.00001;
 	float fx1,fx2,fx0;
 	printf("\nEnter the initial guesses x1 and x2\n");
 	printf("x1=");
 	scanf("%f",&x1);
 	printf("\nx2=");
 	scanf("%f",&x2);
 	fx1=f(x1);
 	fx2=f(x2);
 	x0=((x1*fx2)-(x2*fx1))/(fx2-fx1);
 	fx0=f(x0);
 	int count=1;
 			printf("\n The calculation of root is as follows:\n\n");
 			printf("\tx1\tx2\tfx1\tfx2\tx0\tfx0");
 			printf("\n\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t",x1,x2,fx1,fx2,x0,fx0);
 			
 			do
 				{
 					x0=((x1*fx2)-(x2*fx1))/(fx2-fx1);
 					fx0=f(x0);
 					x1=x2;
 					x2=x0;
 					fx1=fx2;
 					fx2=fx0;
					printf("\n\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t",x1,x2,fx1,fx2,x0,fx0);
					count++;
					 
				} while(fabs(fx0)>err);
			printf("\n\n\tThe required root is:%.4f",x0);
			printf("\n\n\tThe number of iteration is: %d",count);
 	
 	return 0;
 }