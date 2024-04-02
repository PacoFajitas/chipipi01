/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:13:18 by tfiguero          #+#    #+#             */
/*   Updated: 2024/04/02 21:30:38 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombies;

	zombies = zombieHorde(5, "Marky");
	if (!zombies)
		return (1);
	delete [] zombies;
	return (0);
}