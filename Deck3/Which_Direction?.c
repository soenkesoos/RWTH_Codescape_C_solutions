#include "codescape.h"
void run(char* key) {
// char* key describes which portal is correct
// (u = bottom, o = top, r = right, l = left)
// all other portals lead to the laser

char* list = "mmmmmmpm";
switch (*key)
{
    case 'u':
        list = "lllmmmmmlmpm";
        break;
    case 'o':
        list = "lmmmmmlllmpm";
        break;
    case 'l':
        list = "llmmmmmllmpm";
        
}

for(int i = 0;list[i] != '\0'; i ++){
    switch (list[i]){
        case 'l':
            turnLeft();
            break;
        case 'm':
            move();
            break;
        case 'p':
            pickUp();
    }
}
}
