/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 12:42:47 by tfiguero          #+#    #+#             */
/*   Updated: 2024/04/02 21:26:45 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void	announce(void);
        Zombie(std::string name);
        void    nameZombie(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
#endif