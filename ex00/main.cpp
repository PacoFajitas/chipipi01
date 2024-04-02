/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 12:39:22 by tfiguero          #+#    #+#             */
/*   Updated: 2024/04/02 21:14:41 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie2;
    zombie2 = newZombie("Marky2");
    zombie2->announce();
    delete zombie2;
    
    randomChump("Marky");
    return (0);
}