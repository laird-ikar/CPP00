/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 08:36:09 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/13 08:29:42 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

std::string PhoneBook::truncate(std::string str)
{
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9) + ".");
}

PhoneBook::PhoneBook()
{
	this->nb_contact = 0;
}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::add(Contact &contact)
{
	this->contact_list[nb_contact] = contact;
	this->nb_contact = (this->nb_contact + 1) % 8;
}

void	PhoneBook::print_contact(int contact)
{
	if (contact > this->nb_contact || contact < 0)
	{
		std::cout << "Uwun't! There is no contact " << contact << '\n';
		return ;
	}
	std::cout	<< contact_list[contact].get_firstname() << '\n'
				<< contact_list[contact].get_lastname() << '\n'
				<< contact_list[contact].get_nickname() << '\n'
				<< contact_list[contact].get_phonenumber() << '\n'
				<< contact_list[contact].get_darkestsecret() << '\n';
}

void	PhoneBook::print_contact_list(void)
{
	int	i;

	i = 0;
	while (i < nb_contact)
	{
		std::cout
		<< std::setw(10) << i << '|'
		<< std::setw(10) << truncate(contact_list[i].get_firstname()) << '|'
		<< std::setw(10) << truncate(contact_list[i].get_lastname()) << '|'
		<< std::setw(10) << truncate(contact_list[i].get_nickname()) << '\n';
		i++;
	}
}
