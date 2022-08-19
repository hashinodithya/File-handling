#include<stdio.h>

void merge( int *a,int *b, int *c,int n1,int n2){
    for(int i=0;i<n1+n2;i++){
        if(i<n1){
            c[i]=a[i];}
        else {
            c[i]=b[i-n1];
           // printf("%d",i-n1);
            }

       // printf("%d\n",*c);
    }
}


int main(){
    int a[]={1,43,12,45,4};
    int b[]={900,345,563,234,655};

    int c[10]={0};

    int l1=sizeof(a)/sizeof(int);
    int l2=sizeof(b)/sizeof(int);

    merge(a,b,c,l1,l2);

    for(int i=0;i<l1+l2;i++){
        printf("%d\n",c[i]);
    }


return 0;
}

/*merge(a,b,c, n1, n2){
    for(int i=0;i<n1+n2;i++){
        if(i<n1){
            *c=*a;
            a++;
            }
        else{
            *c=*b;
            b++;
            }
        c++;
    }
}
*/
