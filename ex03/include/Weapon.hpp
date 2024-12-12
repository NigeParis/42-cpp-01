/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:34:55 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/12 16:26:06 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {


	public:
	
		Weapon( std::string str );
		~Weapon( void );

		void setType(std::string newType);
		std::string& getType( void );
			
	private:
	
		std::string _type;
	
};

#endif