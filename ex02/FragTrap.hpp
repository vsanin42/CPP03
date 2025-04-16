/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:54:09 by vsanin            #+#    #+#             */
/*   Updated: 2025/04/16 13:21:26 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#define FT_DEF_CON		"FragTrap: Default constructor called\n"
#define FT_PARAM_CON	"FragTrap: Parametrized constructor called\n"
#define FT_COPY_CON		"FragTrap: Copy constructor called\n"
#define FT_COPY_OP		"FragTrap: Copy assignment operator called\n"
#define FT_DESTR		"FragTrap: Destructor called\n"

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string& newName);
		FragTrap(const FragTrap& ref);
		FragTrap& operator=(const FragTrap& ref);
		~FragTrap();
		
		void highFivesGuys(void);
};

#endif
