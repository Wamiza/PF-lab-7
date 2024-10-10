#include <stdio.h>

   int main()
   {
   	int numbers,sum=0;
   	int arr[9]={1,2,3,4,5,6,7,8,9};
   	
   	printf("Enter the Amount of Value");
   	scanf("%d" ,&numbers);
   	
    printf("Enter %d Values:\n", numbers);
        for (int i=0; i<numbers; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Values in Reverse Order:\n");
        for (int i=numbers-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
 return 0;
}