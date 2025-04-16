/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:45:44 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/16 13:21:40 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#define ST_DEF_CON		"ScavTrap: Default constructor called\n"
#define ST_PARAM_CON	"ScavTrap: Parametrized constructor called\n"
#define ST_COPY_CON		"ScavTrap: Copy constructor called\n"
#define ST_COPY_OP		"ScavTrap: Copy assignment operator called\n"
#define ST_DESTR		"ScavTrap: Destructor called\n"

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string& newName);
		ScavTrap(const ScavTrap& ref);
		ScavTrap& operator=(const ScavTrap& ref);
		~ScavTrap();
		
		void attack(const std::string& target);
		void guardGate(void);
};

#endif
