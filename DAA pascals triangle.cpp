#include <stdio.h>  
int main()  
{  
 int co=1,rows = 6;  
for(int i = 0; i < rows; i++)  
{  
    for(int space = 1; space < rows - i; ++space)  
    {  
        printf("  ");  
    }  
    for(int j = 0; j <= i; j++)   
    {  
        if (j == 0 || i == 0)  
            co = 1;  
        else  
            co = co * (i - j + 1) / j;  
        printf("%4d", co);  
    }  
printf("\n");  
}  
}  
