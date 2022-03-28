/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toabs.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/17 13:41:28 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/11/19 16:00:26 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toabs(int n)
{
	if (n < 0)
		n = (n * -1);
	return (n);
}