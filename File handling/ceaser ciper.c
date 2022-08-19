#include<stdio.h>

int main(){
    char msg[80];
    printf("Enter message to encrypt: ");
    gets(msg);

    int i=0,n;
    printf("enter shift amount: ");
    scanf("%d",&n);

    while(msg[i]!='\0'){

        int x=msg[i];
        if (x>='A' && x<='Z'){
        x=x+n;
        if (x>'Z'){
        x=x-26;}

        }
        else if(x>='a' && x <='z'){
                x=x+n;
        if(x>'z'){
        x=x-26;
        }}
        printf("%c",x);
        i++;
    }


}
