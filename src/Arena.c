#include "Arena.h"

#include <stdlib.h>

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

size_t* ArenaGetValues(Arena* arena)
{
    return arena->values;
}

void ArenaDestroy(Arena* arena)
{
    free(arena);
}
