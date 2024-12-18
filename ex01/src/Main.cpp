/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:48:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/18 09:15:58 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

	Zombie* test1; 
	Zombie* test2; 
	Zombie* test3; 
	Zombie* test4; 
	
	std::cout << "test 1: \"test1 = zombieHorde( 5, \"Nigel\" );" << std::endl;
	test1 = zombieHorde( 5, "Nigel" );
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		test1[i].announce();
	delete[] test1; 
	
	std::cout << "test 2: \"test2 = zombieHorde( 0, \"ZeroHorde\" );" << std::endl;
	test2 = zombieHorde( 0, "ZeroHorde" );
	std::cout << std::endl;
	if (test2) {
		test2[0].announce();
		delete[] test2; 
	}
	
	std::cout << "test 3: \"test3 = zombieHorde( 10, \"Ten\" );" << std::endl;
	test3 = zombieHorde( 10, "Ten" );
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		test3[i].announce();
	delete[] test3;

	std::cout << "test 4: \"test4 = zombieHorde( 5, \"\" );" << std::endl;
	std::cout << std::endl;
	test4 = zombieHorde( 5, "" );
	for (int i = 0; i < 5; i++)
		if(test4)
			test4[i].announce();
	delete[] test4;



	return (0);	
}