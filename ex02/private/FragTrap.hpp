/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:50:58 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/25 11:01:50 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public :

	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);

	void	highFivesGuys(void);

	FragTrap	&operator=(FragTrap const &src);
};

#endif
