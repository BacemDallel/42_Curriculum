#include <fcntl.h>    // For open() function
#include <unistd.h>   // For close() function
#include <stdio.h>    // For printf() function
#include <stdlib.h>   // For exit() function

// Function prototypes from the get_next_line project
char *get_next_line(int fd);

int main(int argc, char **argv)
{
    int fd;
    char *line;

    // Check if a file name was provided as an argument
    if (argc != 2)
    {
        printf("Usage: %s <file_name>\n", argv[0]);
        return (1);
    }

    // Open the file provided as argument
    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }

    // Read lines from the file until EOF using get_next_line
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);  // Free the allocated memory after each line
    }

    // Close the file descriptor
    close(fd);
    return (0);
}
