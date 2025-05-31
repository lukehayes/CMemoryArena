#include <stddef.h>

#ifndef LDH_MEM_ARENA_H
#define LDH_MEM_ARENA_H

#define ARENA_MAX_COUNT 3

typedef struct Arena Arena;

/**
* Create a new  memory arena.
*
* @param size_t bufferSize.
*/
Arena* ArenaCreate(size_t bufferSize);

/**
* Insert data into the arena at the next available slot.
*
* @param Arena* arena.
* @param size_t data.
*/
void* ArenaInsert(Arena* arena, void* val, size_t dataSize);

/**
* Insert data into the arena at the a specific location.
*
* @param Arena* arena.
* @param size_t data.
*/
void ArenaInsertAt(Arena* arena, size_t pos, size_t data);

/**
* Set all of the memory of the arena to zero.
*/
void ArenaClear(Arena* arena);

size_t* ArenaGetValues(Arena* arena);

/**
* Free all memory associated with this arena.
*
* @param Arena* arena.
*/
void ArenaDestroy(Arena* arena);

/**
* Print the arena to stdout.
*
* @param Arena* arena.
*/
void ArenaPrint(Arena* arena);

#endif // !LDH_MEM_ARENA_H
