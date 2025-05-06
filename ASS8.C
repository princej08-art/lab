#include<stdio.h>
int main()
{
	double a,b,c;
	char ch;
	printf("Enter a,b");
	scanf("%lf %lf",&a,&b);
	printf("Enter your choice");
	scanf(" %c", &ch);
	switch(ch)
	{
		case'+':
			c=a+b;
			printf("SUM=%lf",c);
			break;
		case'-':
		    c=a-b;
		    printf("Diff=%lf",c);
		    break;
		case'*':
		    c=a*b;
		    printf("product=%lf",c);
		    break;
		case'/':
		    c=a/b;
			printf("Div=%lf",c);
			break;
	    default:
	        printf("wrong choice");
	
	}
	return 0;
}
