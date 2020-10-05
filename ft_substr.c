/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 01:06:15 by jinhokim          #+#    #+#             */
/*   Updated: 2020/10/02 22:36:16 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s == 0)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i] && i < len)
		str[i++] = s[start++];
	str[i] = 0;
	return (str);
}
