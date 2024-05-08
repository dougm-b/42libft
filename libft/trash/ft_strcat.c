#include <unistd.h>
#include <stdio.h>

char    ft_strcat(char  *dest, const char *src)
{
    char    temp[100];
    int i;
    int f;

    i=0;
    f=0;
    while (src[i] != '\0')
    {
        temp[f] = src[i];
        i++;
        f++;
    }
    i=0;
    while (dest[i] != '\0')
    {
        temp[f] = dest[i];
        i++;
        f++;
    }
    temp[f] = '\0';
    return(temp);
    
    /*temp = *dest;
    i=0;
    f=0;
    while (src[i] != '\0')
    {
        dest[f] = src[i];
        i++;
    }
    i=0;
    while (temp[i] != '\0')
    {
        dest[f] = temp[i];
        i++;
    }
    dest[f] = '\0';
    return(dest);*/
}

int main(void)
{   
    char    dest;
    const char  *src;

    src = "Sempre";
    dest[100] = "Avante";
    ft_strcat(dest, src);
    printf("%s", dest);
    printf("%s", "\n");
    return(0);
}
