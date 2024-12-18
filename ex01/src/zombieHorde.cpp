/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 09:11:05 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/18 09:01:30 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	if (N < 1 || name.empty())
		return (0);
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		horde[i].setName(name);
	}	
	return (horde);
};

