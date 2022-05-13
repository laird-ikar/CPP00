/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 07:42:35 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/05 17:18:36 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:"
		<< Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits
		<< ";withdrawals:" << Account::_totalNbWithdrawals << '\n';
}

void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount < withdrawal)
		return (false);
	Account::_totalNbWithdrawals++;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";deposits:" << Account::_totalNbDeposits
		<< ";withdrawals:" << Account::_totalNbWithdrawals << '\n';
}

void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    std::cout << '[' << now->tm_year + 1900 << std::setfill('0') << std::setw(2)
		<< now->tm_mon + 1 << std::setfill('0') << std::setw(2) << now->tm_mday
		<< '_' << std::setfill('0') << std::setw(2) << now->tm_hour
		<< std::setfill('0') << std::setw(2) << now->tm_min
		<< std::setfill('0') << std::setw(2) << now->tm_sec << "] ";
}

Account::Account(void)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";created" << '\n';
}

Account::~Account(void)
{
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";closed" << '\n';
}
