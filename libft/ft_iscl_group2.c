/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscl_group2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 19:57:42 by vpopovyc          #+#    #+#             */
/*   Updated: 2017/01/24 19:57:57 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_iscl_group2(char c)
{
    if (c == 'o' || c == 'u' || c == 'x' || c == 'X')
        return (1);
    return (0);
}
