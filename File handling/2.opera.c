#include<stdio.h>


int main(){
    FILE *ptr;
    ptr=fopen("test2.txt","r+");
    if (ptr!=NULL){
    printf("File exists\n");}
    else
    printf("no file");

    char kk[]="";
   // fscanf(ptr,"%s",kk);
    fseek(ptr,2,SEEK_SET);
    fprintf(ptr,"we are :");
    fgets(kk,7,ptr);
   // fseek(ptr,3,SEEK_CUR);
    //fprintf(ptr,"%d",kk);
    printf("%s",kk);
}
