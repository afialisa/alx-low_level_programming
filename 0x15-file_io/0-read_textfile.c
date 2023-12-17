#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - a program that reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed
 *
 * Return: the numbers of letters printed, if it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd;
ssize_t w;
ssize_t t;
char *buf;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}
