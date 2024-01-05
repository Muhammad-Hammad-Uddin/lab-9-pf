#include<stdio.h>

int gcd(int number,int i,int returnval){
    if (number==i)
    {
        return returnval;
    }
    else
    {
        if (number%i==0)
        {
            returnval = i;
        }
        i++;
        gcd(number,i,returnval);
        
    }
    

}

int main(){
    int number;
    int returnval=1;
    printf("Enter num: ");
    scanf("%d",&number);
    int x=gcd(number,1,returnval);
    printf("GCD is %d",x);
}
