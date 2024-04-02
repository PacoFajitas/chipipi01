/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:16:26 by tfiguero          #+#    #+#             */
/*   Updated: 2024/04/02 21:29:40 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "Invalid number of zombies" << std::endl;
		return (NULL);
	}
	if (name.empty())
	{
		std::cout << "Invalid name" << std::endl;
		return (NULL);
	}
	Zombie	*horde = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		horde[i].nameZombie(name);
		horde[i].announce();
	}
	return (horde);
}