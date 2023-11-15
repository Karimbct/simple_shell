#include "shell.h"
/**
 * tokenize_command - Tokenize the given command.
 * @cmd: The command to tokenize.
 * @args: The array to store the tokenized arguments.
 */
void tokenize_command(char *cmd, char *args[])
{
	char *tok;
	int i = 0;

	while ((tok = strsep(&cmd, " ")) != NULL)
	{
		if (*tok != '\0')
		{
			args[i] = tok;
			i++;
		}
	}
	args[i] = NULL;
}
