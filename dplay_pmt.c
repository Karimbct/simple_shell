#include"shell.h"
/**
 * dplay_pmt - Display the shell prompt
 * including the current working directory.
 */
void dplay_pmpt(void)
{
	char cwd[MAX_BUFF_SIZE];

	if (getcwd(cwd, sizeof(cwd)) != NULL)
		printf("%s $ ", cwd);
	else
	{
		perror("getcwd");
		printf("$ ");
	}
}
