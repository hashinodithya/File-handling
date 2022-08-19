#include<stdio.h>


int main(){
    char as[12]="";
    printf("enter name :");
    gets(as);

    printf("%s",as);

    int l=sizeof(as)/sizeof(char);

    printf("\n %d",l);

}
