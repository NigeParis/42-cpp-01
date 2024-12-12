/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:32:26 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/12 18:23:49 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"


class HumanA {


	public:
			HumanA(std::string name, Weapon &club);
			~HumanA(void);
			void attack(void);

	private:

			Weapon &_weapon;
			std::string _name;

};


#endif