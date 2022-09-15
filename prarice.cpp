#include<stdio.h>
#include<conio.h>

int main(){
	int Id,passward;
	printf("enter_the_id_and_passward\n");
	scanf("%d%d",&Id,&passward);
	if(Id==990&&passward==990){
		printf("you_are_successfully_login_in_facebook_account\n");
	}
	else{
		printf("sorry!_incorrect_user_name_and_passward\n");
		
	}
	getch();
}