#include<stdio.h>
#include<conio.h>

int main()
{
	int Id,passward;
	printf("enter_your_Id_and_passward\n");
	scanf("%d%d",&Id,&passward);
	if(Id==100 && passward==100)
	{
		printf("you_are_successfully_login\n");
	}
	else
	{
		printf("wrong! they_donot_have_register\n");
	}
	getch();
}