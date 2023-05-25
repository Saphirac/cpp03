/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:21:57 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/25 11:55:46 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

// Constructor and Destructor //

DiamondTrap::DiamondTrap(std::string name) :
ClapTrap(name + std::string("_clap_name"), 100, 100, 30),
ScavTrap(),
FragTrap(),
_name(name)
{
	if (DEBUG)
		std::cout << "DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) :
ClapTrap(src._name + std::string("_clap_name"),
		src._hit_points,
		src._energy_points,
		src._attack_damage),
ScavTrap(),
FragTrap(),
_name(src._name)
{
	if (DEBUG)
		std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap::~DiamondTrap(void)
{
	if (DEBUG)
		std::cout << "DiamondTrap destructor called\n";
}

// Getter //

std::string const	&DiamondTrap::getName(void) const
{
	if (DEBUG)
		std::cout << "getName() member function called\n";
	return this->_name;
}

// whoAmI //

void	DiamondTrap::whoAmI(void) const
{
	if (DEBUG)
		std::cout << "whoAmI() member function called\n";
	std::cout << "Who am I ??? Lemme check my id quickly.....\n"
	<< "It's coming back iiiitt'sss : " << this->_name << " !!!\n"
	<< "Also my ClapTrap name is : " << this->ClapTrap::_name << ".\n";
}

// Operator //

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &src)
{
	if (DEBUG)
		std::cout << "DiamondTrap copy assignment operator called\n";
	if (this != &src)
	{
		this->ClapTrap::operator=(src);
		this->_name = src._name;
	}
	return *this;
}
