/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:01 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/15 14:41:12 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap def;
	def.beRepaired(100);
	def.showStats();

	ClapTrap def2(def);
	def2.showStats();

	ClapTrap sample("AAA");
	def = sample;
	def.showStats();

	ClapTrap a("biba");
	a.showStats();

	ClapTrap b("boba");
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
		a.takeDamage(1);
	a.showStats();
	a.takeDamage(1);
	a.showStats();
	return 0;
}
