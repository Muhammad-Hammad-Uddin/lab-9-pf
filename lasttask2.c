#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,N;
	printf("enter value of N");
	scanf("%d",&N);
	char A[N];
	int B[N];
	long long int C[N];
	
	for(i=0;i<N;i++){
		B[i]=rand();
		A[i]=rand()%256;
		C[i]=rand();
	}
	char* D=A;
	int* E=B;
	long long int *F=C;
	
	for(i=0;i<N;i++){
		printf("%d\t",*D);
		D++;
	}
	for(i=0;i<N;i++){
		printf("%d\t",*E);
		E++;
	}
	for(i=0;i<N;i++){
		printf("%d\t",*F);
		F++;
	}
}
