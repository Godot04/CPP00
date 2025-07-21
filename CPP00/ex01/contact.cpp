/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:53:15 by opopov            #+#    #+#             */
/*   Updated: 2025/07/02 16:25:42 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	darkest_secret = "";
	phone_number = 0;
}

Contact::~Contact()
{

}

void Contact::set_contacts(std::string first_name, std::string last_name,
				std::string nickname, std::string darkest_secret,
				int phone_number)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->darkest_secret = darkest_secret;
	this->phone_number = phone_number;
}


std::string Contact::get_first_name()
{
	return (first_name);
}

std::string Contact::get_last_name()
{
	return (last_name);
}

std::string Contact::get_nickname()
{
	return (nickname);
}
std::string Contact::get_darkest_secret()
{
	return (darkest_secret);
}

int Contact::get_phone_number()
{
	return (phone_number);
}
