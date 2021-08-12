#include <stdlib.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strcat(char *dest, char *src)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int len;
    char *str;
    
    i = 0;
    len = 0;
    while (i < size)
    {
        len = len + ft_strlen(strs[i]);
        i++;
    }
    len = len + ((size - 1) * (ft_strlen(sep)));
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == ((void *)0))
        return ((void *)0);
    i = 0;
    while (i < size)
    {
        ft_strcat(str, strs[i]);
        if (i < size - 1)
            ft_strcat(str, sep);
        i++;
    }
    str[i] = '\0';
    return(str);
}
