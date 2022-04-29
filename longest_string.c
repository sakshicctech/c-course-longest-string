#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    
    if (argc == 2) { 
        fputs (argv[1], stdout);
    }
    
    if (argc > 2) {
        char *lstr = argv[1];
        for (int i = 1; i < argc ; i++) {
            if (strlen(argv[i]) > strlen(lstr))
            {
                lstr = argv[i];
            }
        }
        fputs(lstr, stdout);
    }

    else {
        puts("");
    }
}