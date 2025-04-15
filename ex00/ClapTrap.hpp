/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:58:42 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/15 14:41:46 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define DEF_CON		"Default constructor called\n"
#define PARAM_CON	"Parametrized constructor called\n"
#define COPY_CON	"Copy constructor called\n"
#define COPY_OP		"Copy assignment operator called\n"
#define DESTR		"Destructor called\n"

#include <string>

class ClapTrap
{
	private:
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
