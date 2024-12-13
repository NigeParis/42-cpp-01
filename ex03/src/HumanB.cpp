/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:33:09 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/13 09:35:04 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


	HumanB::HumanB(std::string name) : _weapon(NULL) {   // : _weapon(club) default
		
		this->_name = name;
	};
	
	HumanB::~HumanB(void) {

		
	};

	void HumanB::attack(void) {
		
		if (!_weapon)
			return ;
		std::cout << this->_name;
		std::cout << " attacks with their ";
		std::cout << this->_weapon->getType();
		std::cout << std::endl;
		
	};

	void HumanB::setWeapon(Weapon &club) {

		std::string type = club.getType();
		this->_weapon = &club;
		this->_weapon->setType(type);
		
	};
