/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaladi <agaladi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 02:42:54 by agaladi           #+#    #+#             */
/*   Updated: 2024/07/14 05:32:46 by agaladi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../main.h"

int	is_quote(char *str)
{
	return (ft_strcmp(str, "\"") || ft_strcmp(str, "\'"));
}

int	is_rederection(char *str)
{
	return (ft_strcmp(str, "<<") || ft_strcmp(str, ">>")
	|| ft_strcmp(str, ">") || ft_strcmp(str, "<"));
}


int		is_command(char *str)
{
	if (ft_strlen(str) < 2|| ft_strlen(str) > 6)
		return (0);
	if (ft_strcmp(str, "echo") || ft_strcmp(str, "cd")
		|| ft_strcmp(str, "pwd") || ft_strcmp(str, "export")
		|| ft_strcmp(str, "unset") || ft_strcmp(str, "env")
		|| ft_strcmp(str, "exit"))
		return (1);
	return (0);
}

int	is_flag(char *str)
{
	if (str[0] == '-' && str[1] != '\0')
		return (1);
	else
		return (0);
}
