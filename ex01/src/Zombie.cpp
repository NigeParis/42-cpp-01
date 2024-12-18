/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:08:54 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/18 09:07:01 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	
};

Zombie::Zombie(std::string name) {

	this->_name = name;
};

Zombie::~Zombie( void ) {
	
	std::cout << "deleted " << this->_name << std::endl;
};		

void Zombie::setName(std::string name) {

	this->_name = name;	
};

void Zombie::announce( void ) {
		std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};


