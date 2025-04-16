/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:41:02 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/16 19:55:22 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CPP
#define DIAMONDTRAP_CPP

#define DT_DEF_CON		"DiamondTrap:\tDefault constructor called\n"
#define DT_PARAM_CON	"DiamondTrap:\tParametrized constructor called\n"
#define DT_COPY_CON		"DiamondTrap:\tCopy constructor called\n"
#define DT_COPY_OP		"DiamondTrap:\tCopy assignment operator called\n"
#define DT_DESTR		"DiamondTrap:\tDestructor called\n"

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& ref);
		DiamondTrap(const std::string& newName);
		DiamondTrap& operator=(const DiamondTrap& ref);

		void showStats(void) const;
		void attack(const std::string& target);
		void whoAmI(void);
};

#endif
