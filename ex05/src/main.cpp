/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:48:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/17 17:39:15 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
	Harl harl;

	std::cout << "function called in main : \033[31mharl.complain(\"DEBUG\");\033[0m" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	
	std::cout << "function called in main : \033[31mharl.complain(\"ERROR\");\033[0m" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "function called in main : \033[31mharl.complain(\"INFO\");\033[0m" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	
	std::cout << "function called in main : \033[31mharl.complain(\"WARNING\");\033[0m" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	
	std::cout << "function called in main : \033[31mharl.complain(\"NOT_EXISTING\");\033[0m" << std::endl;
	harl.complain("NOT_EXISTING");
	std::cout << std::endl;
	
	std::cout << "function called in main : \033[31mharl.complain(\"\");\033[0m" << std::endl;
	harl.complain("");
	std::cout << std::endl;

	return (0);
}
