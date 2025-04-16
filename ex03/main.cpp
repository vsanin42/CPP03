/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:01 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/16 21:38:05 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
	{
		std::cout << "\n\t\tdefault cases:\n\n";
		DiamondTrap def;
		def.showStats();
		
		DiamondTrap def2(def);
		def2.showStats();
		
		DiamondTrap sample("AAA");
		sample.showStats();
		def = sample;
		def.showStats();

		DiamondTrap def3(sample);
		def3.showStats();
	}
	{
		std::cout << "\n\t\tbiba and boba cases:\n\n";
		DiamondTrap a("biba");
		a.showStats();

		DiamondTrap b("boba");
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
		a.highFivesGuys();
		a.whoAmI();
	}
	return 0;
}
