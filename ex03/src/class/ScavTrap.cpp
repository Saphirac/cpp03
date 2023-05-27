/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:21:57 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 12:06:25 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

// Constructor and Destructor //

ScavTrap::ScavTrap(std::string name) :
ClapTrap(name, 100, 50, 20),
_guard_mode(false)
{
	if (DEBUG)
		std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(ScavTrap const &src) :
ClapTrap(src._name, src._hit_points, src._energy_points, src._attack_damage),
_guard_mode(src._guard_mode)
{
	if (DEBUG)
		std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap::ScavTrap(void) :
ClapTrap("Default", 100, 50, 20)
{
	if (DEBUG)
		std::cout << "FragTrap constructor called\n";
}

ScavTrap::~ScavTrap(void)
{
	if (DEBUG)
		std::cout << "ScavTrap destructor called\n";
}

// GuardGate and attack //

void	ScavTrap::guardGate(void)
{
	if (DEBUG)
		std::cout << "guardGate() member function called\n";

	if (this->_guard_mode == false)
	{
		std::cout << this->_name << " entered Guard Keeper mode.\n";
		this->_guard_mode = true;
	}
	else
		std::cout << this->_name << " is already in Guard Keeper mode.\n";
	
}

void	ScavTrap::attack(std::string const &target)
{
	if (DEBUG)
		std::cout << "ScavTrap attack() member function called\n";
	
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
	{
		std::cout << this->_name << " does not have EP or HP :( you lost...\n";
		return ;
	}
	this->_energy_points--;

	std::cout << "ScavTrap " << this->_name
	<< " attacks " << target
	<< ", causing " << this->_attack_damage
	<<" points of damage!\n";
}

// Operator //

ScavTrap	&ScavTrap::operator=(ScavTrap const &src)
{
	if (DEBUG)
		std::cout << "ScavTrap copy assignment operator called\n";
	if (this != &src)
	{
		this->ClapTrap::operator=(src);
		this->_guard_mode = src._guard_mode;
	}
	return *this;
}
