/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 08:36:12 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/13 08:11:55 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact()
{
	this->firstname = "";
	this->lastname = "";
	this->nickname = "";
	this->phonenumber = "";
	this->darkestsecret = "";
}

Contact::~Contact()
{}

void	Contact::set_firstname(std::string firstname)
{
	this->firstname = firstname;
}

void	Contact::set_lastname(std::string lastname)
{
	this->lastname = lastname;
}

void	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::set_phonenumber(std::string phonenumber)
{
	this->phonenumber = phonenumber;
}

void	Contact::set_darkestsecret(std::string darkestsecret)
{
	this->darkestsecret = darkestsecret;
}

std::string	Contact::get_firstname(void)
{
	return (this->firstname);
}

std::string	Contact::get_lastname(void)
{
	return (this->lastname);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::get_phonenumber(void)
{
	return (this->phonenumber);
}

std::string	Contact::get_darkestsecret(void)
{
	return (this->darkestsecret);
}
