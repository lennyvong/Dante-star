/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** tools
*/

#include <unistd.h>

int my_strlen(char  const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 1) {
    }
    return i;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_str_alpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

void my_puterr(char const *str)
{
    write(2, str, my_strlen(str));
}

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
