#include<stdio.h>
#include<math.h>
#define f(x) x*x+4*sin(x)
#define f1(x) 2*x+4*cos(x)
 int main()
 {
 	float x1,x2,err=0.0001;
 	float fx,f1x;
 	printf("\nEnter the initial guess\n");
 	printf("x1=");
 	scanf("%f",&x1);
 	fx=f(x1);
 	f1x=f1(x1);
 	x2=x1-(fx/f1x);
 	int count=1;
 	 		printf("\n The calculation of root is as follows:\n\n");
 			printf("\tx1\tfx\tf1x\tx2");
 			printf("\n\t%.4f\t%.4f\t%.4f\t%.4f",x1,fx,f1x,x2);
 			
 			do
 				{
 					x1=x2;
 					fx=f(x1);
 					f1x=f1(x1);
 					x2=x1-(fx/f1x);
					printf("\n\t%.4f\t%.4f\t%.4f\t%.4f",x1,fx,f1x,x2);
					 count++;
					 
				} while((fabs(x2-x1)/x2>err));
			printf("\n\n\tThe required root is:%f",x2);
			printf("\n\n\tThe number of iteration is: %d",count);
			
	  
 	return 0;
 }