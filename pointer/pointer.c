#include <stdio.h>

int main()
{
    int num = 56;
    // pointer Declaration
    int *p;
    p = &num;

    printf("Address of the Var:%x\n", p);
    printf("Value of the Var:%d\n", *p);

    // Array Pointer
    int arr[5] = {11, 22, 33, 44, 55};

    int *ptr;
    int *aptr;

    ptr = &arr[3];

    printf("*ptr=%d\n", *ptr);       // 44
    printf("ptr=%d\n", ptr);         // Address
    printf("*ptr+1=%d\n", *ptr + 1); // 45
    printf("*ptr-1=%d\n", *ptr - 1); // 43
    printf("ptr+1=%d\n", ptr + 1);
    printf("ptr-1=%d\n", ptr - 1);

    for (int i = 0; i <= 4; i++)
    {
        aptr = &arr[i];
        printf("Address:%x\n", aptr);
        printf("value:%d\n", *aptr);
    }

    int arr2[5];
    int i;
    for (i = 0; i < 5; ++i)
    {
        printf("&arr2[%d]=%u\n", i, &arr2[i]);
    }

    printf("Address of Array x:%u", arr2);

    return 0;
}
