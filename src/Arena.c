#include "Arena.h"

#include <stdlib.h>


Arena* ArenaCreate()
{
    Arena* arena = malloc(sizeof(Arena));

    return arena;
}

void ArenaDestroy(Arena* arena)
{
    free(arena);
}
