/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:29:40 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/16 21:18:58 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap()
: ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << DT_DEF_CON;
	name = "";
	ClapTrap::name = "_clap_name";
	hp = FragTrap::defaultHP;
	energy = ScavTrap::defaultEnergy;
	damage = FragTrap::defaultDamage;
}

DiamondTrap::DiamondTrap(const std::string& newName)
: ClapTrap(newName), ScavTrap(newName), FragTrap(newName)
{
	std::cout << DT_PARAM_CON;
	name = newName;
	ClapTrap::name = newName + "_clap_name";
	hp = FragTrap::defaultHP;
	energy = ScavTrap::defaultEnergy;
	damage = FragTrap::defaultDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref)
: ClapTrap(ref), ScavTrap(ref), FragTrap(ref)
{
	std::cout << DT_COPY_CON;
	name = ref.name;
	ClapTrap::name = ref.ClapTrap::name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ref)
{
	std::cout << DT_COPY_OP;
	if (this != &ref)
	{
		ClapTrap::operator=(ref);
		name = ref.name;
		ClapTrap::name = ref.ClapTrap::name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() { std::cout << "\n" << DT_DESTR; }


void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::showStats(void) const
{
	std::cout << "\n-------\n";
	std::cout << "DiamondName:\t" << name << "\n";
	std::cout << "ClapName:\t" << ClapTrap::name << "\n";
	std::cout << "HP:\t\t" << hp << "\n";
	std::cout << "Energy:\t\t" << energy << "\n";
	std::cout << "Damage:\t\t" << damage;
	std::cout << "\n-------\n\n";
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am DiamondTrap \"" << name << "\", a.k.a. ClapTrap \"" << ClapTrap::name << "\" :)" << "\n";
}
