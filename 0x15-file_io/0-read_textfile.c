#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that read text file and print to POSIX STDOUT
 * by Achakpo Isioma
 *
 * @filename: pointer to the file being read
 * @letters: numbers of letters to be read
 * Return: actual number of letter read and printed
 *        0 when file can not be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fdescription;
	ssize_t wri;
	ssize_t st;

	fdescription = open(filename, O_RDONLY);
	if (fdescription == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	st = read(fdescription, buff, letters);
	wri = write(STDOUT_FILENO, buff, st);

	free(buff);
	close(fdescription);
	return (wri);
}
