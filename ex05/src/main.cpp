/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:48:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/17 13:49:02 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
	Harl test;

	test.complain("DEBUG");
	test.complain("ERROR");
	test.complain("INFO");
	test.complain("WARNING");
	test.complain("EXIST_PAS");
	test.complain("");
	//test.complain(NULL);

	return (0);
}
