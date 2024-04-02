/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:55:29 by tfiguero          #+#    #+#             */
/*   Updated: 2024/04/02 22:13:31 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if(this->_weapon->getType().empty())
	{
		Weapon weapon("fists");
		this->_weapon = &weapon;
	}
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
}