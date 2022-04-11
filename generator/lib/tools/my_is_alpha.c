/*
** EPITECH PROJECT, 2022
** my_is_alpha.c
** File description:
** my_is_alpha
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    int alpha = 1;

    if (str[i] == '\0')
        return (alpha);
    while (str[i] != '\0' && alpha == 1) {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {
            i = i + 1;
        } else {
            alpha = 0;
        }
    }
    return (alpha);
}
