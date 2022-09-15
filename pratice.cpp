#include<stdio.h>
#include<conio.h>

int main(){
	int num=1;
	if(num<=10){
		if(num==1){
			printf("the_value_is:%d\n",num);
		}
		else{
			printf("the_value_is_greater_then_1\n");
		}
	}
	else{
		printf("the_value_is_greater_then_10\n");
	}
	getch();
}