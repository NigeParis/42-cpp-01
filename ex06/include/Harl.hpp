/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:04:31 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/16 16:44:42 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Harl {

    public:

        Harl(void);
        ~Harl(void);
        void complain( std::string level );

    private:
        
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    
};





#endif
