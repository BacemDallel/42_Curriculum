#include <stdio.h>
#include <fcntl.h> // for open()
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;

    // Open the file to read (replace "test.txt" with your test file)
    fd = open("test.txt", O_RDONLY);
    if (fd == -1)
    {
        printf("Error: Could not open file\n");
        return (1);
    }

    // Read and print each line until get_next_line returns NULL
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line); // Free the line after printing it
    }

    // Close the file
    close(fd);
    return (0);
}
