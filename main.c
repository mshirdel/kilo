#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int main()
{
    unsigned int a = 5;
    printf("%u \n", a);
    // 00000101
    // 00000010
    // 00000111 
    // a &= ~(1);
    printf("%u \n", ~(a));

    return 0;
}