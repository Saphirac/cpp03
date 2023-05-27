/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:13:58 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/27 12:04:35 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private :
	
	bool	_guard_mode;

public :

	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	ScavTrap(void);
	~ScavTrap(void);

	void			guardGate(void);
	virtual void	attack(std::string const &target);

	ScavTrap	&operator=(ScavTrap const &src);
};

#endif
