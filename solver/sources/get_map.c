/*
** EPITECH PROJECT, 2022
** B-CPE-200-PAR-2-1-dante-lenny.vongphouthone
** File description:
** get_map
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char **my_str_to_word_array(char *str, char p_break);

char **get_map(char *map_name, char **map)
{
    struct stat bytes;
    int fd = 0;
    char *tmp = NULL;

    if (stat(map_name, &bytes) == -1)
        return (NULL);
    fd = open(map_name, O_RDONLY);
    if (fd == -1)
        return (NULL);
    tmp = malloc(sizeof(char) * (bytes.st_size + 1));
    if (read(fd, tmp, bytes.st_size) == - 1)
        return (NULL);
    tmp[bytes.st_size] = '\0';
    map = my_str_to_word_array(tmp, '\n');
    free(tmp);
    return (map);
}
