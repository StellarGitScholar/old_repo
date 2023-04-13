#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

/**
 *read_textfile - reads a text file and prints the letters
 *
 *@filename: filename.
 *
 *@letters: numbers of letters printed.
 *
 *Return: numbers of letters printed
 */

size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /*MAIN_H*/
