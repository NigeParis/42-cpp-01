/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:48:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/12 16:25:56 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"




int main()
{

	{
		Weapon club = Weapon("crude spiked club");


		std::cout << club.getType() << std::endl;
	// 	HumanA bob("Bob", club);
	// 	bob.attack();
		club.setType("some other type of club");
	// 	bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		std::cout << club.getType() << std::endl;
	// 	HumanB jim("Jim");
	// 	jim.setWeapon(club);
	// 	jim.attack();
		club.setType("some other type of club");
	// 	jim.attack();
	}
return 0;
}