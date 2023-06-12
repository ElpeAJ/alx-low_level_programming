#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Read text file to STDOUT
 * @filename: text file to be read
 * @letters: number of letters to be read and printed
 * Return: w - actual number of letters it could read
 * and print; 0 when the file cannot be opened or read
 * or filename is NULL or if write failes or does not
 * write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fp;
		ssize_t FileDirectories;
	ssize_t r;
	ssize_t w;

	FileDirectories = open(filename, O_RDONLY);
	if (FileDirectories == -1)

		return (0);
	fp = malloc(sizeof(char) * letters);
	r = read(FileDirectories, fp, letters);
	w = write(STDOUT_FILENO, fp, r);

	free(fp);
	close(FileDirectories);
	return (w);
}

