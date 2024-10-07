#include <stdio.h> /* searches system header file directories */
#include "usefulfunctions.h" /* notice "" searches current directory */

int main(void) /* void means no input argument */
{
    printf("Hello World!\n");  /* using standard ouput function to printf()*/
    printf("%d\n",sqr(255));
    printf("Goodbye World!\n");

    return 0; /* return exit code 0, no error */
}
