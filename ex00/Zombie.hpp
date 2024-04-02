/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 12:42:47 by marvin            #+#    #+#             */
/*   Updated: 2024/03/31 12:42:47 by marvin           ###   ########.fr       */
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
};

Zombie			*newZombie(std::string name);
void			randomChump(std::string name);

#endif