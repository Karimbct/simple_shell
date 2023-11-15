#include"shell.h"
/**
 * rd_cmd - Read a command from standard input.
 * @cmd: Buffer to store the read command.
 */
void rd_cmd(char *cmd)
{
	size_t length;

	if (fgets(cmd, MAX_CMD_LENGTH, stdin) == NULL)
	{
		printf("\n");
		exit(EXIT_SUCCESS);
	}
	length = strlen(cmd);
	if (cmd[length - 1] == '\n')
		cmd[length - 1] = '\0';
}
