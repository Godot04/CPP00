/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:23:27 by opopov            #+#    #+#             */
/*   Updated: 2025/07/02 16:43:11 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		int phone_number;
		std::string darkest_secret;

	public:
		Contact();
		~Contact();
		void set_contacts(std::string first_name, std::string last_name,
						std::string nickname, std::string darkest_secret,
						int phone_number);
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_darkest_secret();
		int get_phone_number();
};
