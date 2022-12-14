/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 04:06:53 by aennaouh          #+#    #+#             */
/*   Updated: 2022/11/05 00:40:52 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>  
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}