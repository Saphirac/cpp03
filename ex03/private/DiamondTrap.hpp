/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:13:58 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/25 11:58:54 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private :

	std::string	_name;

public :

	DiamondTrap(std::string const name);
	DiamondTrap(DiamondTrap const &src);
	~DiamondTrap(void);

	std::string const	&getName(void) const;

	void	whoAmI(void) const;

	DiamondTrap	&operator=(DiamondTrap const &src);
};

#endif
