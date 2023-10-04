#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	int cond1;
	
	printf("input the year :");
	scanf("%d", &x);
	
	cond1=x%4==0&&x%100!=0||x%400==0;
	
	printf("is the year %d the leap year? %i", x, cond1);
	
	return 0;
}
