#include<stdio.h>
void reversearray(int *arr,int size){
int temp;
	int *start=arr;
	int *end=arr+size-1;
	while(start<end){
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
	
}
int main(){
	int arr[10],i;
	for(i=0;i<10;i++){
		printf("enter elements %d ",i+1);
		scanf(" %d", &arr[i]);
		
	
}
		printf("entered array is\n");
		for(i=0;i<10;i++){
		
		
		printf("%d ",arr[i]);
	}
	reversearray(&arr,10);
	printf("reversed array is ");
	for(i=0;i<10;i++){
		
		printf("%d ",arr[i]);
	
	
	
}}
