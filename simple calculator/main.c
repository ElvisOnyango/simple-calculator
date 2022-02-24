/*elvis Onyango
DSE-02-8535/2021
password dse-02-8535/2021
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char operator;
   float x,y,results=0;
   printf("Enter any operator like number\n");
   scanf("%s",&operator);
   printf("Enter the values of operands number\n");
   scanf("%f%f",&x,&y);
   switch(operator)
       {

           case '+':
               results=x+y;
               break;
           case '-':
               results=x-y;
               break;
               case '*':
               results=x*y;
               break;
               case '/':
               results=x/y;
               break;
               default:
                printf("default operator\n");
       }
       printf("the value=%f",results);
    return 0;
}
