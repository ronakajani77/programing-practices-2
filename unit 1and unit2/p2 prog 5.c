#include<stdio.h>
int main(){
   int n,i;
   printf("enter the number of elements:");
   scanf("%d",&n);
   int arr[n],arr2[n];
   printf("enter %d element for first array:\n",n);
   for(i=0;i<n;i++){
    printf("element %d:",i+1);
        scanf("%d",&arr1[i]);
   }
   \\copy element
   for(i=0;i<n;i++){
    printf("%d",arr1[i]);
   }
   printf("\nCopied array:");
   for(i=0;i<n;i++){
    printf("%d",arr2[i]);
   }
   return 0;

}
