/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jjourdai.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjourdai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:13:38 by jjourdai          #+#    #+#             */
/*   Updated: 2017/03/23 12:25:41 by jjourdai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JJOURDAI_H
# define JJOURDAI_H

# include "libft.h"
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <errno.h>
# include <op.h>
# include <fcntl.h>
# include <sys/types.h>

# define USAGE_ERROR "Usage: ./asm [-a] <sourcefile.s>"
# define ILLEGAL_OPTION "asm: illegal option -- %c\n"
# define NOT_ALLOW "Invalid character in \"%s\" [line:col] [%d:%d]\n",word[i] ,token[*len].line , token[*len].col
# define FLAG ""

/*
**symbole .name = -1;
**symbole .comment = -2;
**symbole label: = -3;
**symbole name_operator = -4 - op->number
**symbole rX = -21 - X (X_MAX == REG_NUMBER)
**symbole 
**symbole
**symbole
**symbole
**symbole
**symbole
**symbole
**symbole
**symbole
**symbole
**
*/

typedef enum	e_enum
{
	SUCCESS = 1,
	TRUE = 1,
	FALSE = 0,
	ERROR = 0,
	SPACE = ' ',
	INS = 1,
	LABEL = 2,
	PARAM = 3,
	REG = 4,
	DIRE = 5,
	INDI = 6,
	OP = 7,
	ID = 50,
	LC = 51,
	DC = 52,
	SC = 53,
	
}				t_enum;

typedef	struct	s_lexeme
{
	int			type;	//symbole
	char		*str;	//name
	int			line;
	int			col;
}				t_lex;

int		apply_flag(char **flag, int *option);
void	check_option(char c, int *option);

#endif
