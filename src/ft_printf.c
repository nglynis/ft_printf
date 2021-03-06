/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 21:17:40 by nglynis           #+#    #+#             */
/*   Updated: 2020/09/01 23:34:26 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
    t_print     ptr;

    ft_bzero(&ptr, sizeof(ptr));
    ptr.fd = STDOUT;
    ptr.format = format;
    va_start(ptr.param, format);
    pf_cycle(&ptr);
    va_end(ptr.param);
    return (ptr.result);
    

}
//ft_printf("%s", "Hello World");