/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:11:55 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/11 16:45:13 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {

	public :

		Zombie( std::string );
		~Zombie( void );		

		void announce( void );
		
	private :

		std::string _name;
	
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif