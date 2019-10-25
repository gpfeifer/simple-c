/*
** What is the maximal integer value.
** You only knows the basics of printf and sizeof
** and you don't know if, for, while...
*/

#include <stdio.h>
int main() {
    // Determine the size of an int
    //
    // The size of an int in C depends on the machine/OS 
    // the C program is running on
    //
    // Modern languages like Java or Rust have a better
    // concept here  
    unsigned long size_of_int_in_bytes = sizeof(int);
    printf("What is max int on this machine?\n");
    printf("\n");
    printf("The size (in bytes) of an int of this machine is %lu. \n" , size_of_int_in_bytes);
    printf("You have %lu bits to represent a signed integer on this machine.\n" , size_of_int_in_bytes * 8);
    printf("A binary represenation of the max integer on this machine is a '0' followed by %lu '1'\n"  , size_of_int_in_bytes * 8 -1);
    printf("\n");
    printf("As I learned C - 30 years ago - the 'normal' max int was:\n");
    printf("0111 1111 1111 1111\n");
    printf("\n");
    printf("Today - 30 years later - the situation is different :-P\n");
    printf("0111 1111 1111 1111 1111 1111 1111 1111\n");
    printf("\n");
    int max = 0;
    if (size_of_int_in_bytes == 2) {
        max = 0x7FFF;    
    } else if (size_of_int_in_bytes == 4 ) { 
        max = 0x7FFFFFFF;
    } else {
        printf("ERROR: This simple program handles only Integers of size 16 and 32 bit");
        return 1;
    }
    printf("Max int on this machine is: %d \n" ,max);
    printf("Adding a 1 to the max int results in a negative value: %d \n" , ++max);
    printf("\n");
    return 0;
}