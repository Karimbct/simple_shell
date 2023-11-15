#include"shell.h"
/**
 * exec_cmd - Execute the given command.
 * @cmd: The command to execute.
 */
void exec_cmd(char *cmd)
{
	char *args[MAX_CMD_LENGTH];
	pid_t pid;

	if (strncmp(cmd, "cd", 2) == 0)
	{
		tokenize_cmd(cmd, args);
		ch_directory(args[1]);
	}
	else
	{
		tokenize_cmd(cmd, args);
		pid = fork();
		if (pid < 0)
		{
			perror("Fork failed");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			if (execvp(args[0], args) == -1)
			{
				perror("Error");
				exit(EXIT_FAILURE);
			}
			exit(EXIT_SUCCESS);
		}
		else
			wait(NULL);
	}
}
