#include <stdio.h>
int main(){
    int n, s=0, f=0;
    scanf("%d", &n);
    char arr[n];
    scanf(" %c", &arr[0]);
    for(int i=1; i<n; i++){
      scanf(" %c", &arr[i]);
      (arr[i-1]=='S')? (arr[i]=='F')? s++ : s : (arr[i]=='S')? f++ : f;
      }
      (s>f)? printf("YES") : printf("NO");
    
       return 0;
    }