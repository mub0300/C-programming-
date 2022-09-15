#include<stdio.h>
#include<conio.h>

int main(){
	char grade='B';
	switch(grade){
		case 'A':
		printf("Excellent\n");
		break;
		case 'B':
		printf("Welldone\n");
		break;
		case 'c':
		printf("Better\n");
		break;
		case 'D':
		printf("student_Passed\n");
		break;
		case 'F':
		printf("Better_try_again\n");
		break;
		default:
			printf("invalid_grade\n");
		
	}
	printf("your_grade_is:%c\n",grade);
	getch();
}