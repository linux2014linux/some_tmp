#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
#if TEST == 1
    printf("This is a test case.\n");
#elif TEST == 2
    printf("This is a test 2 case.\n");
#else
    printf("This is a default.\n");
#endif

    return 0;
}
