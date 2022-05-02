#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include <stdlib.h>
#include "main.h"
#include<sys/types.h>
#include<sys/stat.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: name of file to be read
 * @letters: number of letters to be read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, 0_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	lenr = read(fd, buffer, letters);
	close(fd);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}

	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
