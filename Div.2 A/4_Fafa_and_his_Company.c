#include <stdio.h>
int main(){
    int n, j, count=0;
    scanf("%d", &n);
    for(int i=1; i<=n/2;i++){
        j=n;
        if((j-i)%i==0) count++;
    }
    printf("%d", count);
    return 0;
}