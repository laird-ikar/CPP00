/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 08:36:07 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/13 08:30:40 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {
private:
	Contact	contact_list[8];
	int		nb_contact;

	static std::string truncate(std::string str);

public:
	PhoneBook ();
	virtual ~PhoneBook ();

	void	add(Contact &contact);
	void	print_contact(int contact);
	void	print_contact_list(void);
};

#endif
