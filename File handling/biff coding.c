#include<stdio.h>

int main(){
    printf("Enter your message :");
    char msg[50];
    gets(msg);
    printf("Original Message is :%s\n",msg);

    int i=0,j=0;
    while(msg[i]!='\0'){
        if (msg[i]>='a' && msg[i]<='z'){
            msg[i]-=32;
        }
        i++;
    }
    while(msg[j]!='\0'){
        switch(msg[j]){
        case 'A':
        printf("4");break;
        case 'B':
        printf("8");break;
        case 'E':
        printf("3");break;
        case 'I':
        printf("1");break;
        case 'O':
        printf("0");break;
        case 'S':
        printf("5");break;
        default:
        printf("%c",msg[j]);break;

        }
        j++;
    }
    int t;
    for(t=j;t<50;t++){
        printf("!");
        }


return 0;
}
