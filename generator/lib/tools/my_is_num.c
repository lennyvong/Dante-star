/*
** EPITECH PROJECT, 2022
** my_is_num.c
** File description:
** my_is_num
*/

int my_str_isnum(char const *str)
{
    int i = 0;
    int num = 0;

    if (str[i] == '\0')
        return (num);
    while (str[i] != '\0' && num == 0) {
        if (str[i] >= '0' && str[i] <= '9') {
            i = i + 1;
        } else {
            num = 84;
        }
    }
    return (num);
}
