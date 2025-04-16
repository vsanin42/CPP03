/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:59:07 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/16 21:00:28 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap()
: name(""), hp(10), energy(10), damage(0) { std::cout << CT_DEF_CON; }

ClapTrap::ClapTrap(const std::string& newName)
: name(newName), hp(10), energy(10), damage(0) { std::cout << CT_PARAM_CON; }

ClapTrap::ClapTrap(const ClapTrap& ref)
: name(ref.name), hp(ref.hp), energy(ref.energy), damage(ref.damage) { std::cout << CT_COPY_CON; }

ClapTrap& ClapTrap::operator=(const ClapTrap& ref)
{
	std::cout << CT_COPY_OP;
	if (this != &ref)
	{
		name = ref.name;
		hp = ref.hp;
		energy = ref.energy;
		damage = ref.damage;
	}
	return *this;
}

ClapTrap::~ClapTrap() { std::cout << CT_DESTR; }


void ClapTrap::attack(const std::string& target)
{
	if (hp == 0 || energy == 0)
		std::cout << name << " can't attack - no HP or energy left! (ClapTrap)" << "\n";
	else
	{
		std::cout << name << " attacks " << target << ", causing " << damage << " points of damage! (ClapTrap)" << "\n";
		energy -= 1;	
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hp == 0)
		std::cout << name << " can't be damaged - no HP left! (ClapTrap)" << "\n";
	else
	{
		std::cout << name << " takes " << amount << " points of damage! (ClapTrap)" << "\n";
		hp = (amount < hp) ? hp - amount : 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hp == 0 || energy == 0)
		std::cout << name << " can't be repaired - no HP or energy left! (ClapTrap)" << "\n";
	else
	{
		std::cout << name << " repairs itself by regaining " << amount << " HP! (ClapTrap)" << "\n";
		energy -= 1;
		hp += amount;
	}
}

void ClapTrap::showStats(void) const
{
	std::cout << "\n-------\n";
	std::cout << "Name:\t" << name << "\n";
	std::cout << "HP:\t" << hp << "\n";
	std::cout << "Energy:\t" << energy << "\n";
	std::cout << "Damage:\t" << damage;
	std::cout << "\n-------\n\n";
}

const std::string& ClapTrap::getName(void) const { return name; };

const unsigned int& ClapTrap::getHP(void) const { return hp; }

const unsigned int& ClapTrap::getEnergy(void) const { return energy; }

const unsigned int& ClapTrap::getDamage(void) const { return damage; };
