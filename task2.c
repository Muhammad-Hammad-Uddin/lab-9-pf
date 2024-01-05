#include<stdio.h>
int  power(int a,int b){
	if(a==0||b==0)
	return 0;
	return a+power(a,b-1);
	
	
}
int main(){
	int a,b;
	printf("enter 1st number\n");
	scanf("%d",&a);
	printf("enter a 2nd number\n");
	scanf("%d",&b);
	
	printf("%d",power(a,b));
}
