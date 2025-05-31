#include <stdio.h>

#ifdef DEBUG
#define DEBUG_PRINT(...) printf(__VA_ARGS__)
#else
#define DEBUG_PRINT(...)
#endif
int main(int argc, char *argv[])
{
    return 0;
}
