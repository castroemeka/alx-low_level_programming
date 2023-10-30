#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t q;

	for (q = 0; str[q]; q++)
		;
	return (q);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int faad;
	ssize_t wen;

	if (filename == NULL)
		return (-1);
	faad = open(filename, O_WRONLY | O_APPEND);
	if (faad == -1)
		return (-1);
	if (text_content != NULL)
		wen = write(faad, text_content, _strlen(text_content));
	close(faad);
	if (wen == -1)
		return (-1);
	return (1);
}
