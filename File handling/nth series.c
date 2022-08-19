#include<stdio.h>

int main(){
int n;
printf("Enter number : ");
scanf("%d",&n);
float sum=0;
float k=1;
for(int i=1;i<=n;i++){
        k=1;
    for(int j=1;j<=i;j++){
        k=k*i;

        }
        printf("\n%f",k);
        sum=sum+1/(float)k;
}

printf("\n%f",sum);


}
