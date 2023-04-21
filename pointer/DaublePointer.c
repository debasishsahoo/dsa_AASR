#include <stdio.h>

int main()
{

    // Value <------- Pointer <------Pointer

    // Address of thr Variable <-Address of pointer <----Another Address of a Pointer variable

    // int a = 1000;
    // int *p;
    // int **pp;

    // p = &a;
    // pp = &p; // only holding a pointer Address

    // printf("address of a:%x\n", p);
    // printf("address of p:%x\n", pp);
    // printf("address of  pp:%x\n", &pp);
    // printf("Value stored in  p:%d\n", *p);
    // printf("Value stored in  pp:%d\n", **pp);

    // 61ff1c <-----61ff18<-----61ff14

    // address of a:61ff1c
    //  address of p:61ff18
    //  address of  pp:61ff14
    //  Value stored in  p:1000
    //  Value stored in  pp:1000

    int a[] = {100, 200, 300, 400, 500, 600};

    printf("a:%d\n", a[0]);

    int *p[] = {a, a + 1, a + 2, a + 3, a + 4, a + 5};
    printf("p:%d\n", p[0]);

    int **pp = p;
    printf("pp:%d\n", pp);
    pp++;
    printf("pp:%d\n", pp);

    printf("%d %d %d\n", pp - p, *pp - a, **pp);
    *pp++;
    printf("%d %d %d\n", pp - p, *pp - a, **pp);
    ++*pp;
    printf("%d %d %d\n", pp - p, *pp - a, **pp);
    ++**pp;
    printf("%d %d %d\n", pp - p, *pp - a, **pp);
    return 0;
}
