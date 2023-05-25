/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:13:58 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/25 11:50:34 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private :
	
	bool	_guard_mode;

public :

	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	ScavTrap(void);
	~ScavTrap(void);

	void	guardGate(void);
	void	attack(std::string target);

	ScavTrap	&operator=(ScavTrap const &src);
};

#endif
