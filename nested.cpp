#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c;
	printf("enter_the_number_of_ath_bth_and_cth_variable\n");
	scanf("%d%d%d",&a,&b,&c);
	if(b>=a && a>=b ){
		if(c>=b && b>=a){
			printf("the_value_is_true\n");
		}
		else{
			printf("the_value_is_false\n");
		}
	}
	else{
		printf("the_value_false\n");
	}
	getch();
}