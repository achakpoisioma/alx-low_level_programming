#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fdescript);

/**
 * create_buffer - function that allocates 1024 bytes for a buffer
 * by Achakpo Isioma
 *
 * @file: pointer to the name of the file buffer is storing chars for
 *
 * Return: pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - function that closes file descriptors
 * by Achakpo Isioma
 *
 * @fdescript: file descriptor to be closed.
 */
void close_file(int fdescript)
{
	int cls;

	cls = close(fdescript);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fdescript %d\n", fdescript);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file
 * @argc: number of arguments supplied
 * @argv: array of pointers to the arguments
 *
 * Return: if success 0
 */
int main(int argc, char *argv[])
{
	int filefrom, fileto, readd, wri;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	filefrom = open(argv[1], O_RDONLY);
	readd = read(filefrom, buffer, 1024);
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (filefrom == -1 || readd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wri = write(fileto, buffer, readd);
		if (fileto == -1 || wri == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		readd = read(filefrom, buffer, 1024);
		fileto = open(argv[2], O_WRONLY | O_APPEND);

	} while (readd > 0);

	free(buffer);
	close_file(filefrom);
	close_file(fileto);

	return (0);
}
