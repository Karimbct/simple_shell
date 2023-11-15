#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_CMD_LENGTH 100
#define MAX_BUFF_SIZE 1024

/**
 * dplay_pmt - Display the shell prompt
 * including the current working directory.
 */
void dplay_pmt(void);
/**
 * custom_getline - Custom implementation of reading a line
 * from standard input.
 * Return: Pointer to the allocated memory containing the input line.
 */
char *custom_getline();
/**
 * ch_directory - Change the current working directory
 * based on the given directory.
 * @direc: The target directory.
 */
void ch_directory(char *direc);
/**
 * exec_cmd - Execute the given command.
 * @cmd: The command to execute.
 */
void exece_cmd(char *cmd);
/**
 * rd_cmd - Read a command from standard input.
 * @cmd: Buffer to store the read command.
 */
void rd_cmd(char *cmd);
/**
 * tokenize_cmd - Tokenize the given command.
 * @cmd: The command to tokenize.
 * @args: The array to store the tokenized arguments.
 */
void tokenize_cmd(char *cmd, char *args[]);

#endif
