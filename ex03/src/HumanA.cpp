/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:33:09 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/13 09:48:50 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


	HumanA::HumanA(std::string name, Weapon &club) : _weapon(club) {   // : _weapon(club) default
		
		this->_name = name;
	};
	
	HumanA::~HumanA(void) {

		
	};

	void HumanA::attack(void) {

		if ((this->_name.empty()) || (this->_weapon.getType().empty()))
			return ;
		std::cout << this->_name;
		std::cout << " attacks with their ";
		std::cout << this->_weapon.getType();
		std::cout << std::endl;

	};
