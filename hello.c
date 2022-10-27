#include <stdio.h>
#include <termios.h>
#include "test.h"

int main() {
    tcgetsid(12);
    printf("hello world %d\n", TEST_INT);
    print123();
}
