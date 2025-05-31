#include "Arena.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Arena
{
    size_t* data;
    size_t position;
    size_t capacity;
    size_t size;


} Arena;

Arena* ArenaCreate(size_t bufferSize)
{
    Arena* arena = malloc(sizeof(Arena));

    arena->data = malloc(bufferSize);

    arena->position = 0;
    arena->capacity = bufferSize;
    arena->size = 0;

    return arena;
}

void* ArenaInsert(Arena* arena, const void* data, size_t size)
{

    void* dataPtr = memcpy(
        (arena->data + arena->position),
        &data,
        size
    );

    arena->position += size;


    printf("New Size: %lu \n", arena->position);

    return dataPtr;
}

void ArenaInsertAt(Arena* arena, size_t pos, size_t val)
{
    size_t* mem = arena->data + pos;
    *mem = val;

    arena->size += 1;
}

size_t* ArenaGetValues(Arena* arena)
{
    return arena->data;
}

void ArenaClear(Arena* arena)
{
    /*for (int i = 0; i<= arena->capacity; i++)*/
    /*{*/
        /*arena->data[i] = 0;*/
    /*}*/
}

void ArenaDestroy(Arena* arena)
{
    free(arena->data);
    free(arena);
    printf("Arena Freed.\n");
}

void ArenaPrint(Arena* arena)
{
    printf("####################################\n");
    printf("Arena size: %lu, position: %lu bytes, capacity: %lu \n", arena->size, arena->position,arena->capacity);
    printf("####################################\n");
    printf("");

    /*for (int i = 0; i <= arena->capacity; i++)*/
    /*{*/
        /*if (arena->data[i]) {*/
            /*printf("[1]");*/
        /*}else*/
        /*{*/
            /*printf("[0]");*/
        /*}*/

        /*if(i > 0 && i % (sizeof(size_t)) == 0)*/
        /*{*/
            /*printf("\n");*/
        /*}*/
    /*}*/
}
