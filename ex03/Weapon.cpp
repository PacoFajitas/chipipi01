/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:55:50 by tfiguero          #+#    #+#             */
/*   Updated: 2024/04/02 22:00:50 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

void	Weapon::setType(std::string type)
{
	if(type.empty())
	{
		std::cout << "Error: Please enter a type" << std::endl;
		return ;
	}
	this->_type = type;
}
std::string Weapon::getType()
{
	return (this->_type);
}

Weapon::~Weapon()
{
}