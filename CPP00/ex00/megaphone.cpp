/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 11:29:20 by opopov            #+#    #+#             */
/*   Updated: 2025/07/05 17:03:42 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string ft_str_up(std::string argv)
{
	for (int i = 0; argv[i]; i++)
		argv[i] = std::toupper(argv[i]);
	return (argv);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; argv[i]; i++)
		std::cout << ft_str_up(argv[i]) << " ";
	std::cout << std::endl;
	return (0);
}
