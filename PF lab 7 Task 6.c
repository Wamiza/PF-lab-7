#include <stdio.h>
  
   int main()
   {
       int Days,temperature;
       int avg=0;
       int sum=0;
       int arr[7]={25,30,-2,35,42,28,10};
       
       printf("Enter Days");
       scanf("%d" ,&Days);
       
       if (Days < 1 || Days > 7) {
            printf("Invalid Input\n");
     return 1;
    }
        printf("Enter Temperature");
        for(int i=0; i<Days; i++) {
            scanf("%d" ,&temperature);
             sum += temperature;
        }
              avg=sum/Days;
      printf("Average Temperature is :%d", avg);
     return 0;
   }
