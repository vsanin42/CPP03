/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:45:44 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/16 19:21:01 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#define ST_DEF_CON		"ScavTrap:\tDefault constructor called\n"
#define ST_PARAM_CON	"ScavTrap:\tParametrized constructor called\n"
#define ST_COPY_CON		"ScavTrap:\tCopy constructor called\n"
#define ST_COPY_OP		"ScavTrap:\tCopy assignment operator called\n"
#define ST_DESTR		"ScavTrap:\tDestructor called\n"

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap
{
	protected:
		static const int defaultHP = 100;
		static const int defaultEnergy = 50;
		static const int defaultDamage = 20;
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
