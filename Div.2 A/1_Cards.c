#include <stdio.h>
int main(){
    int i, n;
    scanf("%d", &n);
    char arr[n];
    for(i=0; i<n; i++){
      scanf(" %c", &arr[i]);
      if(arr[i] == 'n'){
        printf("1 ");
      }}
      for(i=0; i<n; i++){
      if(arr[i] == 'z'){
        printf("0 ");
      }
    }
       return 0;
    }
