#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;
    struct tm *today;

    time(&tictoc);
    today = localtime(&tictoc);
    if ( today->tm_hour <= 11 && today->tm_hour != 0)
    {
        printf("%d:%02d:%02d AM\n",
                    today->tm_hour,
                    today->tm_min,
                    today->tm_sec);
    }
    else if ( today->tm_hour == 12)
    {
        printf("%d:%02d:%02d PM\n",
                    today->tm_hour,
                    today->tm_min,
                    today->tm_sec);
    }
    else if ( today->tm_hour >= 11 )
    {
        printf("%d:%02d:%02d PM\n",
                    today->tm_hour-12,
                    today->tm_min,
                    today->tm_sec);
    }
    else if ( today->tm_hour == 0 )
    {
        printf("%d:%02d:%02d AM\n",
                    today->tm_hour+12,
                    today->tm_min,
                    today->tm_sec);
    }
    return(0);
}
