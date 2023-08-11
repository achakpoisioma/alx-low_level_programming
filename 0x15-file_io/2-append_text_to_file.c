#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * by Achakpo Isioma
 *
 * @filename: pointer to the name of the file
 * @text_content:  the NULL terminated string to add to the end of the file
 *
 * Return: if function succeed 1
 *		 if the function fails or filename is NULL -1
 *		 if the file does not exist or the user lacks write permissions -1
 *		 otherwise - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdescription, wri, nlen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nlen = 0; text_content[nlen];)
			nlen++;
	}

	fdescription = open(filename, O_WRONLY | O_APPEND);
	wri = write(fdescription, text_content, nlen);

	if (fdescription == -1 || wri == -1)
		return (-1);

	close(fdescription);

	return (1);
}
