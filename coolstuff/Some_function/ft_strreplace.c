#include <stdio.h>
#include <stdlib.h>

void    ft_strreplace(char *s, char *str1, char *str2)
{
    int i;
    int j;
    int k;
    int value;

    value = 0;
    k = 0;
    j = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == str1[j])
        {
            s[i] = str2[k];
            k++;
            j++;
        }
        i++;
    }
    printf("%s\n", s);
}

int main(void)
{
    char s[255] = "bonjour je suis un test";
    char str1[255] = "un";
    char str2[255] = "le";
    ft_strreplace(s,str1,str2);
}
