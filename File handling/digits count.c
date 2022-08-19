#include<stdio.h>

int main(){
    printf("Enter a number:");
    int num;
    scanf("%d",&num);
    printf("digit\t\t:");
    for(int i=0;i<10;i++){
        printf("%d\t",i);

    }
    int digit[10]={0};
    int temp=num;
    while(temp!=0){
        int n=temp%10;
        digit[n]++;
        temp=temp/10;
        }
    printf("\nOccurrences\t:");
    for(int i=0;i<10;i++){
        printf("%d\t",digit[i]);
    }

return 0;
    }
