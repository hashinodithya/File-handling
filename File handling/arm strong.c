#include<stdio.h>

int main(){
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    int sum=0;
    int temp=num;
    int n;
    while(temp!=0){
        n=temp%10;
        sum=sum+n*n*n;
        temp=temp/10;
    }
    if(sum==num){
    printf("%d is a armstrong number",num);
    }
    else
    printf("%d is not a armstrong number",num);
}
