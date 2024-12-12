/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:48:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/12 13:34:16 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

	Zombie* test1; 
	Zombie* test2; 
	Zombie* test3 = NULL; 
	Zombie* test4; 
	
	test1 = zombieHorde( 5, "Nigel" );
	
	for (int i = 0; i < 5; i++)
		test1[i].announce();
	delete[] test1; 
	
	test2 = zombieHorde( 0, "" );
	if (test2) {
		test2[0].announce();
		delete[] test2; 
	}
	test3 = zombieHorde( 10, "Ten" );
	for (int i = 0; i < 10; i++)
		test3[i].announce();
	delete[] test3;

	test4 = zombieHorde( 5, "" );
	for (int i = 0; i < 5; i++)
		test4[i].announce();
	delete[] test4;



	return (0);	
}