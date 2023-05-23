/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:10:39 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/23 20:39:45 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>

class	ClapTrap {
private :

	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

public :

	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();

	std::string const	getName(void) const;
	int const			getHP(void) const;
	int const			getEP(void) const;
	int const			getAD(void) const;

	void	setName(std::string const &name);
	void	setHP(int const &nb);
	void	setEP(int const &nb);
	void	setAD(int const &nb);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	ClapTrap	&operator=(ClapTrap const &src);
};

#endif
