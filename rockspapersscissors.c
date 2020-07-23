#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int genrand(int n)
{
	srand(time(NULL));
	return rand()%n;
}
int main()
{
	char name[30],choice,choice1,a;
	int x,c=0,u=0;
	printf("\nWelcome.Please enter ur name:");
	fflush(stdin);
	gets(name);
	printf("\n Welcome to rocks,papers and scissors, %s!!!",name);
	while(c<=3 && u<=3)
	{
	printf("\n\nEnter your choice(r,p,s):");
	fflush(stdin);
	scanf("%c",&choice);
	x=genrand(3);
	switch(x)
	{
		case 0:
			choice1='r';
			printf("\nThe computer gave:");
			printf("%c",choice1);
			break;
		case 1:
			choice1='p';
			printf("\nThe computer gave:");
			printf("%c",choice1);
			break;
		case 2:
			choice1='s';
			printf("\nThe computer gave:");
			printf("%c",choice1);
			break;
			
	}
	if(choice==choice1)
	{
		printf("\nDraw");
		printf("\nYour score is:%d",u);
		printf("\ncomputer score is:%d",c);
	}
	else if(choice=='p' &&choice1=='s')
	{
		printf("\ncomputer wins.");
		c=c+1;
		printf("\nYour score is:%d",u);
		printf("\ncomputer score is:%d",c);
		
	}
	else if(choice=='p'&&choice1=='r')
	{
		printf("\n Users wins.");
		u=u+1;
		printf("\nYour score is:%d",u);
		printf("\ncomputer score is:%d",c);
	}
	else if(choice=='r'&&choice1=='s')
	{
		printf("\n User wins.");
		u=u+1;
		printf("\nYour score is:%d",u);
		printf("\ncomputer score is:%d",c);
	}
	else if(choice=='s'&&choice1=='p')
	{
		printf("\n user wins.");
		u=u+1;
		printf("\nYour score is:%d",u);
		printf("\ncomputer score is:%d",c);
	}
	else if(choice=='r'&&choice1=='p')
	{
		printf("\n computer wins.");
		c=c+1;
		printf("\nYour score is:%d",u);
		printf("\ncomputer score is:%d",c);
	}
	else if(choice=='s'&&choice1=='r')
	{
		printf("\n computer wins.");
		c=c+1;
		printf("\nYour score is:%d",u);
		printf("\ncomputer score is:%d",c);
	}
	if(c==3)
	{
	 printf("\n-------------------");
	 printf("\nSorry computer wins.");
	 printf("\nDo you want to play again(y/n):");
	 fflush(stdin);
	 scanf("%c",&a);
	 if(a=='y')
	 {
	 	c=0;
	 	u=0;
	 	continue;
	 }
	 else
	 	break;
    }
	else if(u==3)
	{
		printf("\n---------------");
		printf("\nhurray!! U win the game.");
		printf("\nDo you want to play again(y/n):");
	 fflush(stdin);
	 scanf("%c",&a);
	 if(a=='y')
	 {
	 	c=0;
	 	u=0;
	 	continue;
	 }
	 else
	 	break;
    }
	}
}

