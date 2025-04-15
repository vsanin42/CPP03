/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:01 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/15 19:17:41 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap def;
	def.beRepaired(100);
	def.showStats();

	ScavTrap def2(def);
	def2.showStats();

	ScavTrap sample("AAA");
	def = sample;
	def.showStats();

	ScavTrap a("biba");
	a.showStats();

	ScavTrap b("boba");
	b.showStats();

	a.attack(b.getName());
	b.takeDamage(a.getDamage());

	a.showStats();
	b.showStats();

	b.beRepaired(42);
	b.showStats();
	
	while (a.getEnergy() > 0)
		a.attack(b.getName());
	a.showStats();
	a.attack(b.getName());
	a.beRepaired(1);
	
	while (a.getHP() > 0)
		a.takeDamage(20);
	a.showStats();
	a.takeDamage(1);
	a.showStats();

	a.guardGate();
	return 0;
}
