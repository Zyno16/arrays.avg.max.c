#include <stdio.h>
#include <stdlib.h>

int main(){
float t[10];
int k,i,n;
float avg,s;
s=0;
    for(i=0;i<10;i++){
        printf("enter t[%d]=",i+1);
        scanf("%d",&t[i]);

        s=s+t[i];
    }

    avg=s/10;

    k=0;
    for(i=0;i<10;i++){
    if(avg<t[i])
    k=k+1;}
    printf("the sum is %.2f\n",s);
    printf("the averag is %.2f\n",avg);
    printf("number biger than average is %.2f",k);
    return 0;

}
