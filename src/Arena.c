#include "Arena.h"

#include <stdlib.h>
#include <stdio.h>

typedef struct Arena
{
    size_t* values;
    size_t position;
    size_t capacity;
    size_t size;


} Arena;
Arena* ArenaCreate(size_t bufferSize)
{
    Arena* arena = malloc(sizeof(Arena));

    arena->values = malloc(sizeof(size_t) * bufferSize);

    arena->position = 0;
    arena->capacity = bufferSize;
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

void ArenaInsertAt(Arena* arena, size_t pos, size_t val)
{
    size_t* mem = arena->values + pos;
    *mem = val;

    arena->size += 1;
}

size_t* ArenaGetValues(Arena* arena)
{
    return arena->values;
}

void ArenaDestroy(Arena* arena)
{
    free(arena->values);
    free(arena);
}

void ArenaPrint(Arena* arena)
{
    printf("####################################\n");
    printf("Arena size: %lu, position: %lu bytes, capacity: %lu \n", arena->size, arena->position,arena->capacity);
    printf("####################################\n");
    printf("");

    for(int i = 0 ; i <= arena->capacity - 1; i++)
    {
        if (arena->values[i]) {
            printf("[1]");
        }else
        {
            printf("[0]");
        }

        if(i > 0 && i % (sizeof(size_t)) == 0)
        {
            printf("\n");
        }
    }
}
