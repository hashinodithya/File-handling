#include<stdio.h>


int main(){
    int *ptr;
    ptr=fopen("test112.txt","a+");
    if (ptr!=NULL){
    printf("File exists\n");}
    else
    printf("no file");

    fprintf(ptr,"tter");
    fseek(ptr,3,SEEK_CUR);
    fprintf(ptr,"some one");

}
