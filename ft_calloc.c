/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 19:34:26 by jinhokim          #+#    #+#             */
/*   Updated: 2020/10/02 22:25:45 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (!(ptr = (char *)malloc(sizeof(*ptr) * nmemb * size)))
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
