/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:21:57 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 12:04:14 by mcourtoi         ###   ########.fr       */
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

ClapTrap::ClapTrap(std::string name,
			int const hit_points,
			int const energy_points,
			int const attack_damage) :
_name(name),
_hit_points(hit_points),
_energy_points(energy_points),
_attack_damage(attack_damage)
{
	if (DEBUG)
		std::cout << "Constructor called\n";
}

ClapTrap::~ClapTrap(void)
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

int			ClapTrap::getHP(void) const
{
	if (DEBUG)
		std::cout << "getHP member function called\n";
	return this->_hit_points;
}

int			ClapTrap::getEP(void) const
{
	if (DEBUG)
		std::cout << "getEP member function called\n";
	return this->_energy_points;
}

int			ClapTrap::getAD(void) const
{
	if (DEBUG)
		std::cout << "getAD member function called\n";
	return this->_attack_damage;
}

// Setters //

void	ClapTrap::setName(std::string const &name)
{
	if (DEBUG)
		std::cout << "setName member function called\n";
	this->_name = name;
}

void	ClapTrap::setHP(int const &nb)
{
	if (DEBUG)
		std::cout << "setHP member function called\n";
	this->_hit_points = nb;
}

void	ClapTrap::setEP(int const &nb)
{
	if (DEBUG)
		std::cout << "setEP member function called\n";
	this->_energy_points = nb;
}

void	ClapTrap::setAD(int const &nb)
{
	if (DEBUG)
		std::cout << "setAD member function called\n";
	this->_attack_damage = nb;
}

// Member functions //

void	ClapTrap::attack(std::string const &target)
{
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
	{
		std::cout << this->_name << " does not have EP or HP :( you lost...\n";
		return ;
	}

	this->_energy_points--;

	std::cout << "ClapTrap " << this->_name
	<< " attacks " << target
	<< ", causing " << this->_attack_damage
	<<" points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
	{
		std::cout << this->_name << " does not have EP or HP :( you lost...\n";
		return ;
	}

	this->_hit_points -= amount;

	std::cout << "ClapTrap " << this->_name
	<< " takes " << amount
	<< " damage and now have "
	<< this->_hit_points << " hit points!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
	{
		std::cout << this->_name << " does not have EP or HP :( you lost...\n";
		return ;
	}

	this->_energy_points--;

	std::cout << "ClapTrap " << this->_name
	<< " repairs itself and gain " << amount
	<< " hit points and now have "
	<< this->_hit_points << '\n';
}

// All stats //

void		ClapTrap::print_all(void) const
{
	std::cout << "Name : " << this->_name << '\n';
	std::cout << "Hit points : " << this->_hit_points << '\n';
	std::cout << "Energy points : " << this->_energy_points << '\n';
	std::cout << "Attack damage : " << this->_attack_damage << '\n';
}

// Operator //

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	if (DEBUG)
		std::cout << "Copy assignment operator called\n";
	if (this != &src)
	{
		this->_name = src._name;
		this->_hit_points = src._hit_points;
		this->_energy_points = src._energy_points;
		this->_attack_damage = src._attack_damage;
	}
	return *this;
}
