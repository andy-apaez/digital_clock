#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    while (1)
    {
        time_t t;
        struct tm *current;

        t = time(NULL);
        current = localtime(&t);

        system("clear");

        printf("\n====================\n");
        printf("     DIGITAL CLOCK   \n");
        printf("====================\n\n");

        printf("     %02d:%02d:%02d\n",
               current->tm_hour,
               current->tm_min,
               current->tm_sec);

        fflush(stdout);
        sleep(1);
    }

    return 0;
}
