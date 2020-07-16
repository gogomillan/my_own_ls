#include "ggmls.h"

extern int errno;
char *geterrmsg (int errcode);

/*
 * _readdir - Reading and printing the files content in a directory
 *
 * @dir_name: The name of the directory
 *
 * Return: EXIT_SUCCESS when success, EXIT_FAILURE in other case
 */
int _readdir(char *dir_name)
{
	DIR *dir;
	struct dirent *read;
	char bufmsg[128];

	dir = opendir(dir_name);
	if (dir == NULL)
	{
		sprintf(bufmsg, "ls: %s: ", geterrmsg(errno));
		fprintf(stderr, bufmsg, dir_name);
		fprintf(stderr, "%s\n", strerror(errno));
		return (EXIT_FAILURE);
	}
	
	while ((read = readdir(dir)) != NULL)
	    printf("%s\n", read->d_name);

	closedir(dir);
	return (EXIT_SUCCESS);
}

char *geterrmsg (int errcode)
{
	if (errcode == EACCES)
		return ("cannot open directory %s");
	else if (errcode == ENOENT)
		return ("cannot access %s");
	else
		return ("cannot open directory %s");
}
