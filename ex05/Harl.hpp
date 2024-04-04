/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42Barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:25:57 by tfiguero          #+#    #+#             */
/*   Updated: 2024/04/04 18:59:51 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
#define BOLD "\x1B[1m"
#define RESET "\x1B[0m"

class Harl
{
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
    private:
        void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif