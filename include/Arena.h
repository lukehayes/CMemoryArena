
#ifndef LDH_MEM_ARENA_H
#define LDH_MEM_ARENA_H

#define ARENA_MAX_COUNT 10

typedef struct Arena
{

} Arena;


Arena* ArenaCreate();

void ArenaDestroy(Arena* arena);


#endif // !LDH_MEM_ARENA_H
