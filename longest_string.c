#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *lstr = "";
    for (int i = 1; i < argc; i++)
    {
        if (strlen(argv[i]) > strlen(lstr))
        {
            lstr = argv[i];
        }
    }
    puts(lstr);
    return EXIT_SUCCESS;
}
