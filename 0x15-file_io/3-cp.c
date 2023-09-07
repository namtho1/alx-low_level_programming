#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* display_usage_error - Display the usage error message and exit.
* @program_name: The name of the program.
*/
void display_usage_error(const char *program_name)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", program_name);
exit(97);
}

/**
* display_read_error - Display the read error message and exit.
* @file_name: The name of the file.
*/
void display_read_error(const char *file_name)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
exit(98);
}

/**
* display_write_error - Display the write error message and exit.
* @file_name: The name of the file.
*/
void display_write_error(const char *file_name)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
exit(99);
}

/**
* main - Copies the content of one file to another file.
* @ac: The number of arguments.
* @av: The array of arguments.
*
* Return: 0 on success, or an error code on failure.
*/
int main(int ac, char **av)
{
int fd_from, fd_to, read_status, write_status;
char buffer[1024];

if (ac != 3)
display_usage_error(av[0]);

fd_from = open(av[1], O_RDONLY);
if (fd_from == -1)
display_read_error(av[1]);

fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
display_write_error(av[2]);

while ((read_status = read(fd_from, buffer, sizeof(buffer))) > 0)
{
write_status = write(fd_to, buffer, read_status);
if (write_status == -1)
display_write_error(av[2]);
}

if (read_status == -1)
display_read_error(av[1]);

if (close(fd_from) == -1 || close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
exit(100);
}

return (0);
}

