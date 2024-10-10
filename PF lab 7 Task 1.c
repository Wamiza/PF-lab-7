#include <stdio.h>

    int main()
    {
       int value;
   	   int found = 0; 
       int arr[10]={10,20,30,40,50,60,70,80,90,100};
       printf("Enter the value");
       scanf("%d" ,&value);
    	
    	for (int i = 0; i < 10; i++) {
            if (value == arr[i]) {
            found = 1; // Value found
            break;
            }
        }
    	
    	if(found)
    	{
    		printf("Research Found");
		}
		else
		{
			printf("Research Not Found");
		}
	return 0;
}