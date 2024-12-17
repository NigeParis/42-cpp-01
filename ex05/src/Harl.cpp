/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:27:14 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/17 17:37:55 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
    
};

Harl::~Harl(void) {

};

void Harl::error( void ) {

    std::cout << "\033[31m[ ERROR ]\033[0m - level" << std::endl;
    std::cout << "This is unacceptable!"; 
    std::cout << "I want to speak to the manager now." << std::endl;  

};

void Harl::warning( void ) {

    std::cout << "\033[33m[ WARNING ]\033[0m - level" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. ";  
    std::cout << "I’ve been coming for years ";
    std::cout << "whereas you started working here since last month." << std::endl;  
            
};

void Harl::info( void ) {

    std::cout << "\033[35m[ INFO ]\033[0m - level" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money."; 
    std::cout << "You didn’t put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;                  
};

void Harl::debug( void ) {

    std::cout << "\033[36m[ DEBUG ]\033[0m - level" << std::endl;
    std::cout << "I love having extra bacon for my "; 
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
    std::cout << " I really do!" << std::endl;            
};

void Harl::complain( std::string level ) {

    int i = 0;
    
    if (level.empty()) {
    std::cout << "level ARG empty" << std::endl;
        return ;
    }

    std::string find[4] = {

        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"  
    };

    void (Harl::*ptr[4] )(void) = {
        
        ptr[0] = &Harl::debug,
        ptr[1] = &Harl::info,
        ptr[2] = &Harl::warning,
        ptr[3] = &Harl::error
    };

    while (i < 4) {

        if (find[i] == level)
            return (this->*ptr[i])();
        i++;
    } 
    std::cout << "Level ARG not found" << std::endl;
    return ;
};
    