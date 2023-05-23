/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:21:57 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/23 12:44:56 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

// Constructor and Destructor //

ClapTrap::ClapTrap(std::string name) :
_name(name),
_hit_points(10),
_energy_points(10),
_attack_damage(0)
{
	if (DEBUG)
		std::cout << "Constructor called\n";
}

ClapTrap::ClapTrap(ClapTrap const &src) :
_name(src._name),
_hit_points(src._hit_points),
_energy_points(src._energy_points),
_attack_damage(src._attack_damage)
{
	if (DEBUG)
		std::cout << "Copy constructor called\n";
}

~ClapTrap::ClapTrap(void)
{
	if (DEBUG)
		std::cout << "Destructor called\n";
}

// Getters //

std::string const	ClapTrap::getName(void) const
{
	if (DEBUG)
		std::cout << "getName member function called\n";
	return this->_name;
}

int const			ClapTrap::getHP(void) const
{
	if (DEBUG)
		std::cout << "getHP member function called\n";
	return this->_hit_points;
}

int const			ClapTrap::getEP(void) const
{
	if (DEBUG)
		std::cout << "getEP member function called\n";
	return this->_energy_points;
}

int const			ClapTrap::getAD(void) const
{
	if (DEBUG)
		std::cout << "getAD member function called\n";
	return this->_attack_damage;
}

// Setters //



// Member functions //

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points == 0 || this->_hit_points == 0)
		return ;

	this->_energy_points--;

	std::cout << "ClapTrap" << this->_name
	<< "attacks" << target
	<< ", causing" << this->_attack_damage
	<<"points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0)
		return ;
	this->_hit_points -= amount;

	std::cout << "ClapTrap" << this->_name
	<< "takes" << amount
	<< "damage" << "and now have"
	<< this->_hit_points << "hit points!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points == 0 || this->_hit_points == 0)
		return ;

	this->_energy_points--;

	std::cout << "ClapTrap" << this->_name
	<< "repairs itself and gain" << amount
	<< "hit points and now have"
	<< this->_hit_points << '\n';
}

// Operator //

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	if (DEBUG)
		std::cout << "Copy assignment operator called\n";
	return ClapTrap(src);
}
