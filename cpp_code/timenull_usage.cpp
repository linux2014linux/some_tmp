#include <time.h>
#include <stdio.h>

int main(int argc, char* argv[]) {

    time_t t = time(NULL);
    printf("%ld\n", t);


    return 0;
}
