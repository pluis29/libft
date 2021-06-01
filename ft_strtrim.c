/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 23:15:38 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/06/01 13:54:18 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	start = ft_strlen(s1);
	while (start && ft_strchr(set, s1[start]))
		start--;
	return (ft_substr(s1, 0, start + 1));
}
