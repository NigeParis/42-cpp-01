/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:11:55 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/12 13:06:00 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {

	public :

		
		Zombie( void );
		Zombie( std::string );
		~Zombie( void );		

		void announce( void );
		void setName( std::string name );


	private :
			
		std::string _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif