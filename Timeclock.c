#include <stdio.h>
#include <time.h>

int main () {

    time_t current_time_seconds;
    struct tm *current_time;
    current_time_seconds = time(NULL);
    current_time = localtime(&current_time_seconds);
printf("%02d : %02d : %02d\n", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
    return 0;
}