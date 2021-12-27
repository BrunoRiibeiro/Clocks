#include <iostream>
#include <unistd.h>
#include <stdlib.h>
using namespace std;


int main() {
    int seconds, minutes, hours;

    cout << "Set the initial time:" << endl;
    cout << "Hours Minutes Seconds" << endl;
    cin >> hours >> minutes >> seconds;

    if(hours > 12 || minutes > 60 || seconds > 60) {
        cout << "Error!" << endl;
        exit(0);
    }

    while (1) {
        
        cout << hours << " : " << minutes << " : " << seconds << endl;

        seconds++;

        if(seconds > 59) {
            minutes++;
            seconds = 0;
        }
        else if(minutes > 59) {
            hours++;
            minutes = 0;
        }
        else if(hours > 12) {
            hours = 1;
        }

        sleep(1);
        system("clear");

    }
    
}