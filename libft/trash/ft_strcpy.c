#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char  *dest, const char *src)
{
    int i;

    i=0;
    while (src[i] !='\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    const char    *src;
    char    dest[100];
    //char    p;
    //int i;

    src = "Mais uma para lista";
    ft_strcpy(dest, src);
   /* i = 0;
    while (dest[i] !='\0')
    {
        write (1, &dest[i], 1);
        i++;
    }*/
    printf("%s", dest);
    printf("%s", "\n");
    return(0);
}