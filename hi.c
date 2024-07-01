#include <stdio.h>

extern "C" void smileyFace()
{
    const char *smiley = "                   \n"
                         "                       \n"
                         "             |      |    \n"
                         "             |      |    \n"
                         "         \\              / \n"
                         "          \\            /   \n"
                         "            ==========   \n"
                         "                        \n";

    printf("%s", smiley);
}