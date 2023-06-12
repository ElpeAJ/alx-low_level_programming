#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: A pointer to the name of file to be created
 * @text_content: A pointer to string to write into the file
 *
 * Return: If the function fails, -1, otherwise 1
 */

int create_file(const char *filename, char *text_content)
{
	int FileDirectories, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	FileDirectories = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
			w = write(FileDirectories, text_content, len);
			if (FileDirectories == -1 || w == -1)
			return (-1);

			close(FileDirectories);

			return (1);
}
