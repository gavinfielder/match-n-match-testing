/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfielder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 00:04:47 by gfielder          #+#    #+#             */
/*   Updated: 2018/09/29 10:06:16 by gfielder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test42f.h"

int foo(int a);

int main(void)
{
	test42f_int_eq("test 1", 5, foo(4));
	test42f_int_eq("test 2", 5, foo(3));

	return 0;
}

