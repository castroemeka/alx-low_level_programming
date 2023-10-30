#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *cuf;
	ssize_t food;
	ssize_t wood;
	ssize_t tood;

	food = open(filename, O_RDONLY);
	if (food == -1)
		return (0);
	cuf = malloc(sizeof(char) * letters);
	tood = read(food, cuf, letters);
	wood = write(STDOUT_FILENO, cuf, tood);

	free(cuf);
	close(food);
	return (wood);
}
