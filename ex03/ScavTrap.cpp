/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:45:33 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/16 21:06:23 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>	

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << ST_DEF_CON;
	hp = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(const std::string& newName) : ClapTrap(newName)
{
	std::cout << ST_PARAM_CON;
	hp = 100;
	energy = 50;
	damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& ref) : ClapTrap(ref)
{
	std::cout << ST_COPY_CON;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ref)
{
	std::cout << ST_COPY_OP;
	if (this != &ref)
	{
		ClapTrap::operator=(ref);
	}
	return *this;
}

ScavTrap::~ScavTrap() { std::cout << ST_DESTR; }

void ScavTrap::attack(const std::string& target)
{
	if (hp == 0 || energy == 0)
		std::cout << name << " can't attack - no HP or energy left! (ScavTrap)" << "\n";
	else
	{
		std::cout << name << " attacks " << target << ", causing " << damage << " points of damage! (ScavTrap)" << "\n";
		energy -= 1;	
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << name << ": Entering Gatekeeper mode" << "\n";
}
