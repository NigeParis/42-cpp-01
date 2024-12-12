/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:33:09 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/12 18:36:31 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


	HumanA::HumanA(std::string name, Weapon &club) : _weapon(club) {   // : _weapon(club) default
		
		this->_name = name;
	};
	
	HumanA::~HumanA(void) {

		
	};

	void HumanA::attack(void) {

		std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;

		
	};
