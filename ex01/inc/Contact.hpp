/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 08:36:08 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/13 08:10:53 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;

public:
	Contact ();
	virtual ~Contact ();

	void		set_firstname(std::string firstname);
	void		set_lastname(std::string lastname);
	void		set_nickname(std::string nickname);
	void		set_phonenumber(std::string phonenumber);
	void		set_darkestsecret(std::string darkestsecret);
	std::string	get_firstname(void);
	std::string	get_lastname(void);
	std::string	get_nickname(void);
	std::string	get_phonenumber(void);
	std::string	get_darkestsecret(void);
};

#endif
