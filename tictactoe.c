#include <stdio.h>

int main() {

    printf("X or O\n");

    char X;
    scanf("%c",&X);

    


    printf("     |     |      \n");
    printf("  %c  |     |      \n", X);
    printf("_____|_____|_____ \n");
    printf("     |     |      \n");
    printf("     |  %c  |      \n", X);
    printf("_____|_____|_____ \n");
    printf("     |     |      \n");
    printf("     |     |  %c   \n", X);
    printf("     |     |      \n");

}