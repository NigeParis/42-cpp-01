/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:04:31 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/16 15:12:49 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Harl {

    public:

        typedef void (Harl::*FunPtr)();

        Harl(void);
        ~Harl(void);
        void complain( std::string level );

    private:
        
        FunPtr *funptr;
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    
};





#endif
