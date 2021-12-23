#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {

    int seconds, minutes, hours;

    printf("Set the initial time:\n Hours Minutes Seconds \n\n");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    if(hours > 12 || minutes > 60 || seconds > 60) {
        printf("Error!\n");
        exit(0);
    }


    while(1) {

        printf("                                     _____            \n");
        printf("                                  _.'_____`._         \n");
        printf("                                .'.-'  12 `-.`.       \n");
        printf("                               /,' 11      1 `.\\     \n");
        printf("                              // 10      /   2 \\\\   \n");
        printf(" *********                   ;;         /       ::    \n");
        printf(" * Clock *                   || 9  ----O      3 ||    \n");
        printf(" *********                   ::                 ;;    \n");
        printf("                              \\\\ 8           4 //   \n");
        printf("                               \\`. 7       5 ,'/     \n");
        printf("                                '.`-.__6__.-'.'       \n");
        printf("                                 ((-._____.-))        \n");
        printf("                                 _))       ((_        \n");
        printf("                                '--'       '--'       \n\n");
        
        printf(" %d : %d : %d\n", hours, minutes, seconds);

        seconds ++;
        if(seconds > 59) {
            minutes++;
            seconds = 0;
        }
        if(minutes > 59) {
            hours++;
            minutes = 0;
        }
        if(hours > 12){
            hours = 1;
        }

        sleep(1);
        system("clear");
        
    }
    return 0;
}