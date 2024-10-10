#include <stdio.h>

int main() {
   int minima,maxima,number;
   int arr[10]={4,1,6,8,10,21,8,9,2,6};
   
   printf("Enter Number of Elements");
   scanf("%d" ,&number);
   
   if (number < 1 || number > 10) {
        printf("Number must be between 1 and 10.\n");
        return 1;
    } 
	  
    printf("Enter Elements");
    for(int i=0; i<number; i++) {
      scanf("%d" ,&arr[i]); }
      
    minima = arr[0];
    maxima = arr[0];
   
    for(int i=0; i<number; i++) {
       if(arr[i] < minima) {
       minima=arr[i];
   }
        if (arr[i] > maxima) {
            maxima = arr[i];
        }
    }
    printf("minima is :%d\n", minima);
    printf("maxima is :%d", maxima);
  return 0;
}