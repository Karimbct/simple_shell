#include"shell.h"
/**
 * main - Entry point of the simple shell program.
 * Return: 0 on success.
 */
int main(void)
{
	char cmd[MAX_CMD_LENGTH];

	printf("============Simple Shell============\n");
	while (dplay_pmt(), rd_cmd(cmd),
			strcmp(cmd, "exit") != 0)
		exece_cmd(cmd);
	return (0);
}
