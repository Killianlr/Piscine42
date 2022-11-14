/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaharel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:56:19 by icaharel          #+#    #+#             */
/*   Updated: 2022/10/02 22:26:15 by icaharel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FONCTIONS_H
# define FONCTIONS_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

char	*ft_strcpy(char *dest, char *src);
char	**ft_split_space(char *str);
char	*ft_mille(int size);
char	*convert_in_num(char *nbr);
char	*convert_one(char *nbr);
char	*convert_two(char *nbr);
char	*convert_three(char *nbr);
char	*ft_read(int argc, char **argv);
char	*ft_strstr(char *str, char *to_find);
char	*ft_firstword(char *str);
char	*ft_putback(char *str);
void	readwrite(char **split, char *dico);
char	**parse_number(char *str);
void	ft_rush02(char *input, char *dico);
int		count_parse(char *str);
int		ft_strlen(char *s);
int		ft_strlenletter(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
#endif
