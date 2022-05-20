/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 08:36:11 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/18 10:57:27 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../inc/Contact.hpp"
#include "../inc/PhoneBook.hpp"

int main(void)
{
	std::string	user_input;
	PhoneBook	phonebook;
	Contact		new_contact;

	while (1)
	{
		std::cout << "Please enter your command (ADD, SEARCH, EXIT)" << '\n';
		std::cin >> user_input;
		if (user_input == "ADD")
		{
			std::cout << "Please enter firstname" << '\n';
			std::cin >> user_input;
			new_contact.set_firstname(user_input);
			std::cout << "Please enter lastname" << '\n';
			std::cin >> user_input;
			new_contact.set_lastname(user_input);
			std::cout << "Please enter nickname" << '\n';
			std::cin >> user_input;
			new_contact.set_nickname(user_input);
			std::cout << "Please enter phone number" << '\n';
			std::cin >> user_input;
			new_contact.set_phonenumber(user_input);
			std::cout << "Please enter darkest secret" << '\n';
			std::cin >> user_input;
			new_contact.set_darkestsecret(user_input);
			phonebook.add(new_contact);
		}
		else if (user_input == "SEARCH")
		{
			phonebook.print_contact_list();
			std::cout << "Please enter contact number" << '\n';
			std::cin >> user_input;
			phonebook.print_contact(std::atoi(user_input.c_str()));
		}
		else if (user_input == "EXIT")
			exit(0);
		else
			std::cout << "Sorry, wrong command uwun't" << '\n';
	}
	return 0;
}
