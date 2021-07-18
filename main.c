#include <stdio.h>
#include "operations.h"

int main() {

    char operation;
    char running = 1;

    // print options
    // check if options are valid
    // run option user chose
    // set running to 0 after routine is complete

    while (running == 1) {
        printOperations();
        scanf("%c", &operation);
        printf("you chose %c", operation);

        if (operation != 'm' && operation != 'h' && operation != 'f' && operation != 'q') {
            printf("That's not an option.\n\n");
        } else if (operation == 'm') {
            // run operation m
            running = 0;
        } else if (operation == 'h') {
            // run operation h
            running = 0;
        } else if (operation == 'f') {
            // run operation f
            running = 0;
        } else {
            running = 0;
        }
    }

    return 0;
}