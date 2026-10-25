#include<stdio.h>
  int main(){
    return 0;
    int r,c;
     int arr[r][c];
    printf("enter the r:");
      scanf("%d",&r);
      printf("enter the c:");
      scanf("%d",&c);
       for(int i=0;i<r;i++){
         for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
         }
       }
       printf("\n");
       for(int i=0;i<c;i++){
         for(int j=0;j<r;j++){
            printf("%d",arr[j][i]);
         }
       
       printf("\n");
        }
  return 0;
}
    