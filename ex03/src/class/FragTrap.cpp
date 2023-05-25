/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:21:57 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/25 11:30:50 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

// Constructor and Destructor //

FragTrap::FragTrap(std::string name) :
ClapTrap(name, 100, 100, 30)
{
	if (DEBUG)
		std::cout << "FragTrap constructor called\n";
}

FragTrap::FragTrap(FragTrap const &src) :
ClapTrap(src._name, src._hit_points, src._energy_points, src._attack_damage)
{
	if (DEBUG)
		std::cout << "FragTrap copy constructor called\n";
}

FragTrap::FragTrap(void) :
ClapTrap("Default", 100, 100, 30)
{
	if (DEBUG)
		std::cout << "FragTrap constructor called\n";
}

FragTrap::~FragTrap(void)
{
	if (DEBUG)
		std::cout << "FragTrap destructor called\n";
}

// GuardGate //

void	FragTrap::highFivesGuys(void)
{
	if (DEBUG)
		std::cout << "highFivesGuys member function called\n";
	std::cout << this->_name << " : High fives guys ??? Please...Don't ignore me >:(\n";
}

// Operator //

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	if (DEBUG)
		std::cout << "FragTrap copy assignment operator called\n";
	if (this != &src)
		this->ClapTrap::operator=(src);
	return *this;
}
