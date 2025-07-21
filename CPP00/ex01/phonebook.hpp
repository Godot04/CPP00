/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:47:03 by opopov            #+#    #+#             */
/*   Updated: 2025/07/05 17:53:43 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <cstring>
#include <stdlib.h>

class PhoneBook
{
	private:
		Contact contacts[8];
		int contact_counter;
	public:
		PhoneBook();
		~PhoneBook();
		Contact& get_contact(int i);
		Contact* get_all_contacts();
		int get_contact_counter();
		void ft_search();
		int ft_add();
		void check_contact_counter();
		void display_all();
		void display_row(int r);
};

void fill_spaces(int n);
long ft_atol(std::string str);
