/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:41:38 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/25 11:53:18 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	pikachu("Pikachu");
	ScavTrap	torterra("Torterra");
	FragTrap	evoli("Evoli");
	DiamondTrap	reshiram("Reshiram");

	pikachu.print_all();
	torterra.print_all();
	evoli.print_all();
	reshiram.print_all();

	pikachu.setAD(5);
	torterra.setAD(11);
	torterra.setHP(100);

	std::cout << "I choose you " << pikachu.getName()
	<<  " !\n";
	std::cout << torterra.getName() << " is gonna atomize you !\n";
	
	evoli.attack("Torterra");
	torterra.takeDamage(evoli.getAD());
	pikachu.attack("Torterra");
	torterra.takeDamage(pikachu.getAD());
	torterra.guardGate();
	torterra.guardGate();
	evoli.highFivesGuys();
	reshiram.attack("Evoli");
	evoli.takeDamage(evoli.getAD());
	reshiram.whoAmI();
	pikachu.attack("Torterra");
	torterra.takeDamage(pikachu.getAD() / 2);
	torterra.attack("Pikachu");
	pikachu.takeDamage(torterra.getAD());
	evoli.highFivesGuys();
	pikachu.attack("Torterra");
}
