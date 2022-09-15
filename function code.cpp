#include<stdio.h>
#include<conio.h>


	void f(int j)
	{
		j=10;
	}
	void g(){
		int i=3;
		f (i);
	}
	void f(int *ptr){
		*ptr=5;
	}
	void g()
	{
		int i=3;
		f(&i);
	}
	getch();
