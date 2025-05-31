#include <stdio.h>
#include <stdlib.h>

#include "Arena.h"

typedef struct Foo {
    int n;
    int m;
    int o;
    int p;
} Foo;

int main(int argc, char *argv[])
{

    Foo f = {.n=1, .m = 12312323};


    Arena* a1 = ArenaCreate(100);

    size_t* data = ArenaInsert(a1, (size_t*)100, sizeof(size_t));
    size_t* d2 = ArenaInsert(a1, (size_t*)456, sizeof(size_t));
    Foo* fd = ArenaInsert(a1, (Foo*)&f, sizeof(Foo));
    /*ArenaInsert(a1, f);*/

    ArenaClear(a1);

    printf("Data: %lu \n", (size_t)data);
    printf("Data: %lu \n", (size_t)d2);
    printf("Foo: %lu  %lu\n", (size_t)fd->n, (size_t)fd->m);

    /*ArenaInsertAt(a1, 7, 100);*/

    /*ArenaPrint(a1);*/

    ArenaDestroy(a1);

    return 0;
}
