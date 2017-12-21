#include <sys/time.h>
#include <time.h>
#include <stdio.h>

#include <iostream>
#include <string>

long int gettime_ms() {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    return tp.tv_sec * 1000 + tp.tv_usec / 1000;
}

#if TIMEFLAG == 1
#define COUNTTIME \
    printf("%ld", gettime_ms());
#else
#define COUNTTIME
#endif

int main(int argc, char* argv[]) {

    COUNTTIME;

    int sum = 0;
    for (int idx = 0; idx < 999999999; idx++) {
        sum *= idx;
    }

    COUNTTIME;

    return 0;
}


