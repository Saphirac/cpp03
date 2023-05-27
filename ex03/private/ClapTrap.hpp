/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:10:39 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 12:06:02 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>

# ifndef DEBUG
#  define DEBUG 0
# endif

class	ClapTrap {
protected :

	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

	ClapTrap(std::string name,
				int const hit_points,
				int const energy_points,
				int const attack_damage);

public :

	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();

	std::string const	getName(void) const;
	int			getHP(void) const;
	int			getEP(void) const;
	int			getAD(void) const;

	void	setName(std::string const &name);
	void	setHP(int const &nb);
	void	setEP(int const &nb);
	void	setAD(int const &nb);

	void	print_all(void) const;

	virtual void	attack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	
	ClapTrap	&operator=(ClapTrap const &src);
};

#endif
