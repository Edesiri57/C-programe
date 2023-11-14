#include <stdio.h>
#include "stack.h"

int main()
{
    sPush(19);
    printStack();
    sPush(20);
    printStack();
    sPush(21);
    printStack();

    int poppedValue = sPop();
    printf("Popped value: %d\n", poppedValue);
    printStack();
    return 0;
}