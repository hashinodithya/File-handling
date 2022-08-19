#include<stdio.h>

int main(){
    FILE *pw1 ,*pr2, *pr1;
    pr1=fopen("t1.txt","r");
    pr2=fopen("t2.txt","r");
    pw1=fopen("t3.txt","a");

    char s1[100], s2[100];
    fgets(s1,100,pr1);

    fgets(s2,100,pr2);

    fprintf(pw1,"%s\n",s1);
    fprintf(pw1,"\t%s",s2);



}
