/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:54:59 by tfiguero          #+#    #+#             */
/*   Updated: 2024/04/02 22:11:19 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) 
{
	_name = name;
	_weapon = &weapon;
}
void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his" << this->_weapon->getType() << std::endl;
}
HumanA::~HumanA()
{
}