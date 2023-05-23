/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:41:38 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/23 23:03:41 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	pikachu("Pikachu");
	ClapTrap	torterra("Torterra");

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
	torterra.beRepaired(10);
	pikachu.attack("Torterra");
	torterra.takeDamage(pikachu.getAD());
	torterra.attack("Pikachu");
	pikachu.takeDamage(torterra.getAD());
	pikachu.attack("Torterra");
}
