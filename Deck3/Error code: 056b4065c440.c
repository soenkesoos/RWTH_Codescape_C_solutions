#include "codescape.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//thats the actual title of the level

void reverseString(char* string) {
    int length = strlen(string);
    for (int i = 0; i < length / 2; i++) {
        char temp = string[i];
        string[i] = string[length - i - 1];
        string[length - i - 1] = temp;
    }
}

void run() {
    
    char* list = "mmmlmmgllmmlmmlplllmlmlllm";
    char password[11];
	for(int i = 0;list[i] != '\0'; i ++){
    switch (list[i]){
        case 'l':
            turnLeft();
            break;
        case 'm':
            move();
            break;
        case 'g':
            read(password);
            break;
        case 'p':
            reverseString(&password);
            write(&password);
    }
}
	
}
