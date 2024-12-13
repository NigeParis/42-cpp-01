/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:29:22 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/13 09:32:55 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {

	public:
			HumanB(std::string name);
			~HumanB(void);
			void attack(void);
			void setWeapon(Weapon &club);
			
	private:
			Weapon *_weapon;
			std::string _name;
};

#endif