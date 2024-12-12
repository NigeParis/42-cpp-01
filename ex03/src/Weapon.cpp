/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:41:16 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/12 16:15:35 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string str ) {

	_type = str;	
};

Weapon::~Weapon( void ) {

	
};

void Weapon::setType(std::string newType) {

	this->_type = newType;
	
};


std::string&  Weapon::getType(void){

	std::string& output = _type;
	
	return (output);	
};