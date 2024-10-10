#include <stdio.h>

int main() {
	int number,value;
    int arr[5] = {};
    int size = sizeof(arr) / sizeof(arr[0]);
    int frequency[6]={0};
    
    printf("Enter Number of Elements :");
    scanf("%d" ,&number);
    
     if (number > size) {
        printf("Number of elements exceeds the array size.\n");
        return 1;
    }

        printf("Enter Elements :");
    for (int i = 0; i < number; i++) {
    	scanf("%d" ,&value);
    	if (value >= 0 && value < 6)
         frequency[value]++;
    } 
    
    printf("Repeating Number :");
    
    int found = 0;
    
    for(int i = 0; i < 6; i++){
    	if(frequency[i] > 1){
    		if(found){
    		printf(",");
    	    }
    	    printf("%d", i);
		    found = 1;
		}
	}
	if(!found){
	printf("Not a Single Repeating Number");
    }
    return 0;
}