/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/15 21:20:15 by mikuiper      #+#    #+#                 */
/*   Updated: 2022/04/19 09:41:27 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	msg_cmd_error(char	*cmd, char *s)
{
	ft_putstr_fd(cmd, 2);
	ft_putstr_fd(s, 2);
	ft_putstr_fd("\n", 2);
}

void	msg_exit(char *s, int exit_code)
{
	ft_putstr_fd(s, 2);
	ft_putstr_fd("\n", 2);
	exit(exit_code);
}
