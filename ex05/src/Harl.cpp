/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:27:14 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/16 16:45:43 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(void)  : funptr(NULL)  {
    
};

Harl::~Harl(void) {

};



void Harl::error( void ) {

    std::cout << "An Error ! oh" << std::endl;

};


void Harl::warning( void ) {

    std::cout << "Warning : !!!!!!!!" << std::endl;
            
};


void Harl::info( void ) {

    std::cout << "Info ....... :-)" << std::endl;
            
};


void Harl::debug( void ) {

    std::cout << "Debug and Debug" << std::endl;            
};

void Harl::complain( std::string level ) {

     

    

    
};
