/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:24:39 by opopov            #+#    #+#             */
/*   Updated: 2025/07/05 17:49:36 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::check_contact_counter()
{
	if (contact_counter > 7)
		contact_counter = 0;
}

long ft_atol(std::string str)
{
	unsigned long	res;
	int		i;

	res = 0;
	i = 0;
	if (str[0] == '-')
		return (-1);
	else if (str[0] == '+')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		res *= 10;
		res += str[i] - '0';
		if (res > 9223372036854775807)
			return (-1);
		i++;
	}
	return ((long )res);
}

void fill_spaces(int n)
{
	for (int i = 0; i <= n; i++)
		std::cout << " ";
	std::cout << "| ";
}
