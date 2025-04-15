/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:58:42 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/15 19:23:22 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define CT_DEF_CON		"ClapTrap: Default constructor called\n"
#define CT_PARAM_CON	"ClapTrap: Parametrized constructor called\n"
#define CT_COPY_CON		"ClapTrap: Copy constructor called\n"
#define CT_COPY_OP		"ClapTrap: Copy assignment operator called\n"
#define CT_DESTR		"ClapTrap: Destructor called\n"

#include <string>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hp;
		unsigned int energy;
		unsigned int damage;
	public:
		ClapTrap();
		ClapTrap(const std::string& newName);
		ClapTrap(const ClapTrap& ref);
		ClapTrap& operator=(const ClapTrap& ref);
		~ClapTrap();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void showStats(void) const;
		const std::string& getName(void) const;
		const unsigned int& getHP(void) const;
		const unsigned int& getEnergy(void) const;
		const unsigned int& getDamage(void) const;
};

#endif
