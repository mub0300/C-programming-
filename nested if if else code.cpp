#include<stdio.h>
#include<conio.h>

int main()
{
	int a=100;
	int b=500;
	if(a==100)
	{
		if(b==500)
		{
			printf("the_value_of_a_is 100_and_the_value_of_b_is 500\n");
			}	
			else
			{
				printf("the_value_of_a_is_not 100_and_the_value_of_b_is 500\n");
			}
	}
	else
	{
		printf("sorry! wrong_input");
	}
	printf("Exact_value_of_a_is:%d\n",a);
	printf("Exact_value_of_b_is:%d\n",b);
	getch();
}