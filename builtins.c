#include "builtins.h"

/**
 * builtins - Check and also execute the builtins
 *
 * @info: Information for the shell
 * @arguments: Commands and arguments
 *
 * Return: when the command passed is a builtins
 * return _TRUE if not return _FALSE
 **/
int builtins(general_t *info, char **arguments)
{
	int status;

	status = check_builtin(info, arguments);
	if (status == _FALSE)
		return (_FALSE);

	return (_TRUE);
}


/**
 * check_builtin - Check if the actual command is a builtin_t
 * or not
 *
 * @info: General information about the shell
 * @arguments: Arguments of the command
 *
 * Return: when the command is an actual builtin, return _TRUE
 * or else _FALSE
 **/
int check_builtin(general_t *info, char **arguments)
{
	int a, size;
	builtin_t builtins[] = {
		{"exit", bin_exit},
		{"env", bin_env}
	};

	size = sizeof(builtins) / sizeof(builtins[0]);
	for (a = 0; a < size; a++)
	{
		if (_strcmp(info->command, builtins[a].command) == 0)
		{
			builtins[a].func(info, arguments);
			return (_TRUE);
		}
	}

	return (_FALSE);
}
