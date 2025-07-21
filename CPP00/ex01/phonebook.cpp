/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:32:21 by opopov            #+#    #+#             */
/*   Updated: 2025/07/05 18:07:15 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::ft_search()
{
	while (1)
	{
		std::string tmp;
		std::cout << "enter index from 0-7: \n(if you want to display all values type all)"
					<< std::endl;
		std::cin >> tmp;
		if (!strcmp(tmp.c_str(), "ALL") || !strcmp(tmp.c_str(), "all"))
		{
			display_all();
			break;
		}
		if (ft_atol(tmp) >= 0 && ft_atol(tmp) <= 7)
		{
			display_row(ft_atol(tmp));
			break;
		}
		else
		{
			std::cout << "Invalid value" << std::endl;
			break;
		}
	}
}

int PhoneBook::ft_add()
{
	std::string first_name, last_name, nickname, darkest_secret, phone_number_tmp;
	int phone_number;
	std::cout << "1) Enter a first name" << std::endl;
	std::cin >> first_name;
	std::cout << "2) Enter a last name" << std::endl;
	std::cin >> last_name;
	std::cout << "3) Enter a nickname" << std::endl;
	std::cin >> nickname;
	std::cout << "4) Enter a phone number" << std::endl;
	std::cin >> phone_number_tmp;
	if (ft_atol(phone_number_tmp) == 0 || ft_atol(phone_number_tmp) < 0)
	{
		std::cout << "Invalid input" << std::endl;
		return (0);
	}
	else
		phone_number = ft_atol(phone_number_tmp);
	std::cout << "5) Enter a darkest secret" << std::endl;
	std::cin >> darkest_secret;
	contacts[contact_counter].set_contacts(first_name, last_name, nickname, darkest_secret, phone_number);
	contact_counter++;
	return (1);
}

Contact& PhoneBook::get_contact(int i)
{
	return (contacts[i]);
}

Contact* PhoneBook::get_all_contacts()
{
	return (contacts);
}

int PhoneBook::get_contact_counter()
{
	return (contact_counter);
}

PhoneBook::PhoneBook()
{
	contact_counter = 0;
}

PhoneBook::~PhoneBook()
{

}
