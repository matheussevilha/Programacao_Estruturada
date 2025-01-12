#include <stdio.h>

int main()
{
    char names[3][9] = 
    {
        "Gato",
        "Cachorro",
        "Leao"
    };

    int i;
    for(i = 0; i < 3; i++)
        printf("%s\n", names[i]);
    
    return 0;
}