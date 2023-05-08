#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t nRead, nWrite;
	char *b;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	nRead = read(file, b, letters);
	nWrite = write(STDOUT_FILENO, b, nRead);

	close(file);

	free(b);

	return (nWrite);
}
