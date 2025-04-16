/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:54:09 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/16 19:21:38 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#define FT_DEF_CON		"FragTrap:\tDefault constructor called\n"
#define FT_PARAM_CON	"FragTrap:\tParametrized constructor called\n"
#define FT_COPY_CON		"FragTrap:\tCopy constructor called\n"
#define FT_COPY_OP		"FragTrap:\tCopy assignment operator called\n"
#define FT_DESTR		"FragTrap:\tDestructor called\n"

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap
{
	protected:
		static const int defaultHP = 100;
		static const int defaultEnergy = 100;
		static const int defaultDamage = 30;
	public:
		FragTrap();
		FragTrap(const std::string& newName);
		FragTrap(const FragTrap& ref);
		FragTrap& operator=(const FragTrap& ref);
		~FragTrap();
		
		void highFivesGuys(void);
};

#endif
