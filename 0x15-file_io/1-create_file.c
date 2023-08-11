#include "main.h"

/**
 * create_file - function that creates a file
 * by Achakpo Isioma
 *
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a NULL terminated string to write to the file
 *
 * 1 on success, -1 if fails
 * The created file must have those permissions: rw-------
 * If the file, already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fdescription, wri, nlen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nlen = 0; text_content[nlen];)
			nlen++;
	}

	fdescription = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wri = write(fdescription, text_content, nlen);

	if (fdescription == -1 || wri == -1)
		return (-1);

	close(fdescription);

	return (1);
}
