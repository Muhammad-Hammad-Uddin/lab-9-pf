#include<stdio.h>
int fact(int n){
	if(n==1||n==0)
	return 1;
	int factorial=n*fact(n-1);
	return factorial;
}
int main(){
	int n,a;
	printf("enter a number");
	scanf("%d",&n);
	a =fact(n);
	printf("Factorial of %d is %d",n,a);

}
