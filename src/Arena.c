#include "Arena.h"

#include <stdlib.h>
#include <stdio.h>

typedef struct Arena
{
    size_t values[ARENA_MAX_COUNT];
    size_t position;
    size_t size;


} Arena;

Arena* ArenaCreate()
{
    Arena* arena = malloc(sizeof(Arena));

    arena->values[0] = 0;
    arena->values[1] = 0;
    arena->values[2] = 0;

    arena->position = 0;
    arena->size = 0;

    return arena;
}

void ArenaInsert(Arena* arena, size_t val)
{
    size_t* values = ArenaGetValues(arena);
    size_t i = 0;

    while(values[i] != 0 )
    {
        i++;
    }

    values[i] = val;
    arena->size++;
    arena->position += sizeof(size_t);
}

size_t* ArenaGetValues(Arena* arena)
{
    return arena->values;
}

void ArenaDestroy(Arena* arena)
{
    free(arena);
}

void ArenaPrint(Arena* arena)
{
    printf("Arena size: %lu, position %lu bytes\n", arena->size, arena->position);
    printf("ap / as : %lu\n", arena->position / arena->size);
    printf("%lu / %lu \n\n\n", arena->position / arena->size, arena->position / arena->size);

    for(int i = 0 ; i <= (arena->position / arena->size); i++)
    {
        size_t c = 0;

        while(c < sizeof(size_t) -3 )
        {
            printf("[O]");
            c++;
        }
        printf("........ \n");

    }

}
