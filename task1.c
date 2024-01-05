#include<stdio.h>
void swap(int *x,int *y){
	int temp;
	
	temp=*x;
	*x=*y;
	*y=temp;
	
}

int main(){
	int a,b;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);

	swap(&a,&b);
	printf("the value of a is %d and b is %d",a,b);
//	because the values were not passed as refernce and the sorting was incorrect

}
