/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaladi <agaladi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 04:34:17 by agaladi           #+#    #+#             */
/*   Updated: 2024/07/08 02:39:59 by agaladi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef enum
{
	QUOTES,
	REDIRECTIONS,
	PIPES,
	COMMAND,
	FLAG
} TokenType;

typedef struct
{
	TokenType	type;
	char		*value;
} t_token;

// string utils
int		ft_strlen(char *str);
int		ft_strcmp(char *str1, char *str2);

#endif