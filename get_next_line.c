
# include "get_next_line.h"

char *get_next_line(int fd)
{

    char *buffer;

    buffer = malloc(BUFFER_SIZE);

    read(fd, buffer, BUFFER_SIZE);

    return (buffer);

}