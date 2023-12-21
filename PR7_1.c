/*
Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
For example,
Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0
*/
#include<stdio.h>
int Addition(int x,int y){
	return x+y;
}
int Subtraction(int a,int b){
	return a-b;
}
int Multiplication(int k,int m){
	return k*m;
}
int Division(int i,int j){
	return i/j;
}
int Remainder(int u,int v){
	return u%v;
}
void main(){
	int choice,n1,n2;
	printf("Enter The Value of Number 1: ");
	scanf("%d",&n1);
	printf("Enter The Value of Number 2: ");
	scanf("%d",&n2);
	printf("\nPress 1 for Addition");
	printf("\nPress 2 for Subtraction");
	printf("\nPress 3 for Multiplication");
	printf("\nPress 4 for Division");
	printf("\nPress 5 for Remainder");
	printf("\nPress 0 for Exit");
	do{
	printf("\nEnter your Choice: ");
	scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\nThe Sum of Two Values are : %d",Addition(n1,n2));
				break;
			case 2:
				printf("\nThe Subtraction of Two Values are: %d",Subtraction(n1,n2));
				break;
			case 3:
				printf("\nThe Multiplication of Two Values are :%d",Multiplication(n1,n2));
				break;
			case 4:
				printf("\nThe Division of Two Values are :%d",Division(n1,n2));
				break;
			case 5:
				printf("\nThe Remainder of Two Values are :%d",Remainder(n1,n2));
				break;
			case 6:
				break;
		}
	}while(choice!=0);
}
