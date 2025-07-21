/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:46:49 by opopov            #+#    #+#             */
/*   Updated: 2025/07/05 18:09:24 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	PhoneBook phonebook;
	int i = 0;
	while (1)
	{
		std::string input;
		std::cout << "Enter a command" << std::endl;
		std::cin >> input;
		phonebook.check_contact_counter();
		if (!strcmp(input.c_str(), "EXIT") || !strcmp(input.c_str(), "exit"))
			break;
		else if (!strcmp(input.c_str(), "ADD") || !strcmp(input.c_str(), "add"))
		{
			if (phonebook.ft_add())
				i++;
		}
		else if (!strcmp(input.c_str(), "SEARCH") || !strcmp(input.c_str(), "search"))
			phonebook.ft_search();
		else
			continue;
	}
	return (0);
}
