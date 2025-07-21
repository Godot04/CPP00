/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_utils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 15:28:01 by opopov            #+#    #+#             */
/*   Updated: 2025/07/05 18:13:15 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::display_all()
{
	std::cout << "Index | First name | Last name  | Nickname   |" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << i << ".    | ";

		// first name
		if (strlen((contacts[i].get_first_name()).c_str()) > 10)
			std::cout << (contacts[i].get_first_name()).substr(0, 10) << ".| ";
		else
		{
			std::cout << contacts[i].get_first_name();
			fill_spaces(10 - strlen((contacts[i].get_first_name()).c_str()));
		}

		// last name
		if (strlen((contacts[i].get_last_name()).c_str()) > 10)
			std::cout << (contacts[i].get_last_name()).substr(0, 10) << ".| ";
		else
		{
			std::cout << contacts[i].get_last_name();
			fill_spaces(10 - strlen((contacts[i].get_last_name()).c_str()));
		}

		// nickname
		if (strlen((contacts[i].get_nickname()).c_str()) > 10)
			std::cout << (contacts[i].get_nickname()).substr(0, 10) << ".| ";
		else
		{
			std::cout << contacts[i].get_nickname();
			fill_spaces(10 - strlen((contacts[i].get_nickname()).c_str()));
		}
		std::cout << std::endl;
	}
}

void PhoneBook::display_row(int r)
{
	std::cout << "Index | First name | Last name  | Nickname   |" << std::endl;
	std::cout << r << ".    | ";

	// first name
	if (strlen((contacts[r].get_first_name()).c_str()) > 10)
		std::cout << (contacts[r].get_first_name()).substr(0, 10) << ".| ";
	else
	{
		std::cout << contacts[r].get_first_name();
		fill_spaces(10 - strlen((contacts[r].get_first_name()).c_str()));
	}

	// last name
	if (strlen((contacts[r].get_last_name()).c_str()) > 10)
		std::cout << (contacts[r].get_last_name()).substr(0, 10) << ".| ";
	else
	{
		std::cout << contacts[r].get_last_name();
		fill_spaces(10 - strlen((contacts[r].get_last_name()).c_str()));
	}

	// nickname
	if (strlen((contacts[r].get_nickname()).c_str()) > 10)
		std::cout << (contacts[r].get_nickname()).substr(0, 10) << ".| ";
	else
	{
		std::cout << contacts[r].get_nickname();
		fill_spaces(10 - strlen((contacts[r].get_nickname()).c_str()));
	}
	std::cout << std::endl;
}
