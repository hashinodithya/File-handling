#include<stdio.h>


int main(){

    FILE *file;
    char as[12];
    file=fopen("array.txt","r");
    //int l=sizeof(as)/sizeof(char);

   //  12  printf("\n %d",l);
    if (file==NULL){
    printf("FILE DOES NOT EXISTS");}
    else{
    char s;
    /*while((s=getc(file))!=EOF){
          printf("%c\n",s);
            }
            */
    int num[12];
    for(int a=0;a<12;a++){
      fscanf(file,"%d",&num[a]);
     // printf("%d\n",num[a]);
    }
    for(int i=0;i<12;i++){
        printf("%d\n",num[i]);
    }

    }


}
