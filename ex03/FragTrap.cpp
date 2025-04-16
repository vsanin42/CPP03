/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:54:17 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/16 21:06:56 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << FT_DEF_CON;
	hp = 100;
	energy = 100;
	damage = 30;
}

FragTrap::FragTrap(const std::string& newName) : ClapTrap(newName)
{
	std::cout << FT_PARAM_CON;
	hp = 100;
	energy = 100;
	damage = 30;
}

FragTrap::FragTrap(const FragTrap& ref) : ClapTrap(ref)
{
	std::cout << FT_COPY_CON;
}

FragTrap& FragTrap::operator=(const FragTrap& ref)
{
	std::cout << FT_COPY_OP;
	if (this != &ref)
	{
		ClapTrap::operator=(ref);
	}
	return *this;
}

FragTrap::~FragTrap() { std::cout << FT_DESTR; }

void FragTrap::highFivesGuys(void)
{
	std::cout << name << ": HIGH FIVES GUYS" << "\n";
}
