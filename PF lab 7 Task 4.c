#include <stdio.h>
#include <string.h>

   int main()
   {
   	char name[52];
   	char email[66];
   	int number;
   	char valid_chars[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
   	char valid_email_chars[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789.-_@";
   	char vali_int[]="123456789+-";
   	
   	printf("Enter Name :");
   	scanf("%s" ,name);
   	printf("Enter E-mail :");
   	scanf("%s" ,email);
   	printf("Enter Number :");
   	scanf("%d" ,&number);
   	
    if (strlen(name) > 0) {
        printf("Name : %s\n" ,name);
	   }
    else  {
        printf("Invalid Name\n");
    }
    
	if(strchr(email, '@') != NULL) {
    	printf("E-mail : %s\n" ,email);
	}
	else  {
        printf("Invalid E-mail\n");
    }
    
	if(number> 10 && number <12) {
		printf("Number: %d\n", number);
    }
	else {
        printf("Invalid Number\n");
    }
		
	return 0;
}
	