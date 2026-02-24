//enter n element and arrange them in reverse order.

 #include<stdio.h>

   int main()
   {
       int n,i;

       printf("enter the value for n:-");
       scanf("%d",&n);

       int arr[n];

       printf("enter the %d element :-",n);

       for(i=0;i<n;i++);
       {
           scanf("%d",&arr[i]);
       }
       printf("original array :-");
       for(i=0;i<n;i++)
       {
           printf("%d",arr[i]);
       }
       //logic behind print reverse order of array
       printf("\nReverse order of array:-");
       for(i=n-1;i>=0;i--)

       {
           printf("%d",arr[i]);
       }

        return 0;
   }
