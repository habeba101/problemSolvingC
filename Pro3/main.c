#include <stdio.h>

int main() {
    int a,b,count=0;
    scanf("%d%d",&a,&b);
    while (1){
        a*=3;
        b*=2;
        count++;
        if(a>b) break;

    }
    printf("%d",count);
    return 0;
}
