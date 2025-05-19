#include <stddef.h>

#ifndef LDH_MEM_ARENA_H
#define LDH_MEM_ARENA_H

#define ARENA_MAX_COUNT 3

typedef struct Arena Arena;

Arena* ArenaCreate();

void ArenaInsert(Arena* arena, size_t val);

size_t* ArenaGetValues(Arena* arena);

void ArenaDestroy(Arena* arena);

void ArenaPrint(Arena* arena);

#endif // !LDH_MEM_ARENA_H
