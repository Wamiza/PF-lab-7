#include <stdio.h>

   int main()
   {
   	int numbers,sum=0;
   	int arr[9]={1,2,3,4,5,6,7,8,9};
  
   	printf("Enter the Numbers of Elements to Sum");
   	scanf("%d" ,&numbers);
   	
   	if(numbers<1 || numbers>9) {
   		printf("Invalid Input");
    }
	else {
	    printf("Enter Elements:\n ");
    for (int i=0; i<numbers; i++) {
       scanf("%d" ,&arr[i]);
    }
    // Calculating the sum of the elements
    for (int i=0; i<numbers; i++) {
        sum += arr[i];
    }
    printf("Sum is :%d" ,sum);
   }
   return 0;		
  }