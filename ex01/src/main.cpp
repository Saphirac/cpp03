/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:41:38 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/25 10:46:19 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	pikachu("Pikachu");
	ScavTrap	torterra("Torterra");

	pikachu.print_all();
	torterra.print_all();

	pikachu.setAD(5);
	torterra.setAD(11);
	torterra.setHP(100);

	std::cout << "I choose you " << pikachu.getName()
	<<  " !\n";
	std::cout << torterra.getName() << " is gonna atomize you !\n";
	
	pikachu.attack("Torterra");
	torterra.takeDamage(pikachu.getAD());
	torterra.guardGate();
	torterra.guardGate();
	pikachu.attack("Torterra");
	torterra.takeDamage(pikachu.getAD() / 2);
	torterra.attack("Pikachu");
	pikachu.takeDamage(torterra.getAD());
	pikachu.attack("Torterra");
}
