
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        FILE *fp;
        fp = fopen("test.txt", "w+");
        fwrite(&argv[1],(sizeof(char) * ft_strlen(*argv) + 1), 1 ,fp);
        fclose(fp);
    }
    printf("\x1b[33m ---------- DONE ----------");
    return (0);
}
