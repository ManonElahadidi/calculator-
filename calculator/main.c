#include <stdio.h>
#include <stdlib.h>

int main()
{
   char Operator ;
   float x,y ;
 printf ("write the Operator:");
   scanf("%c", &Operator);
   printf ("\n enter the first number :");
   scanf("%g", &x);
   printf ("\n enter the second number :");
   scanf("%g", &y);

   switch( Operator ){
   case '+':
       printf("%g + %g = %g" ,x ,y ,x+y );
       break ;
          case '-':
       printf("%g - %g = %g" ,x ,y ,x-y );
       break ;
          case '*':
       printf("%g * %g = %g" ,x ,y ,x*y );
       break ;
          case '/':
       printf("%g / %g = %g" ,x ,y ,x/y );
       break ;
          default :
            printf("not found");
            break ;
   }

}
