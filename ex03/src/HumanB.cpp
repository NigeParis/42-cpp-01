/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:33:09 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/12 18:55:40 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"


	HumanB::HumanB(std::string name) : _weapon(NULL) {   // : _weapon(club) default
		
		this->_name = name;
	};
	
	HumanB::~HumanB(void) {

		
	};

	void HumanB::attack(void) {
		
		if (!_weapon)
			return ;
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
		
	};

	void HumanB::setWeapon(Weapon *club) {

		_weapon->setType(club->getType());
		
	};
