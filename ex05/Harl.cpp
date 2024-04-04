/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero <tfiguero@student.42Barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:25:52 by tfiguero          #+#    #+#             */
/*   Updated: 2024/04/04 19:10:31 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    return ;
}

Harl::~Harl()
{
    return ;
}

void Harl::debug(void)
{
    std::cout << BOLD "DEBUG" RESET << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << BOLD "INFO" RESET << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << BOLD "WARNING" RESET << std::endl;
    std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;    
}

void Harl::error(void)
{
    std::cout << BOLD "ERROR" RESET << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void    Harl::complain(std::string level)
{
    if (level == "debug")
        this->debug();
    else if (level == "info")
        this->info();
    else if (level == "warning")
        this->warning();
    else if (level == "error")
        this->error();
    else
        std::cout << "Invalid level of complaint." << std::endl;
}