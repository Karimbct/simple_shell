#include"shell.h"
/**
 * ch_directory - Change the current working directory
 * based on the given directory.
 * @direc: The target directory.
 */
void ch_directory(char *direc)
{
	char cwd[MAX_BUFF_SIZE];

	if (direc == NULL || strcmp(direc, "~") == 0)
		chdir(getenv("HOME"));
	else if (strcmp(direc, "-") == 0)
	{
		char *pvDir = getenv("OLDPWD");

		if (pvDir != NULL)
			chdir(pvDir);
		else
			fprintf(stderr, "cd: OLDPWD not set\n");
	}
	else
	{
		if (chdir(direc) != 0)
			perror("cd");
	}
	if (getcwd(cwd, sizeof(cwd)) != NULL)
	{
		setenv("OLDPWD", getenv("PWD"), 1);
		setenv("PWD", cwd, 1);
	}
	else
		perror("getcwd");
}
