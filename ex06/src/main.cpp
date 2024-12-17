/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:48:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/17 14:39:32 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

enum Level {

	DEBUG = 0,
	INFO = 1,
	WARNING = 2,
	ERROR = 3,
	OTHER = -1
};

Level strToLevel(std::string level) {

	if (level == "DEBUG")
		return (DEBUG);
	if (level == "INFO")
		return (INFO);
	if (level == "WARNING")
		return (WARNING);
	if (level == "ERROR")
		return (ERROR);
	return (OTHER);
}

int main(int argc,  char *argv[])
{
	Harl test;
	std::string input;
	
	if (argc == 2) {

		input = argv[1];
		switch(strToLevel(input)) {

			case DEBUG:
		
				test.complain("DEBUG");
				test.complain("INFO");
				test.complain("WARNING");
				test.complain("ERROR");
				break ;
				
			case INFO:
			
				test.complain("INFO");
				test.complain("WARNING");
				test.complain("ERROR");
				break ;
				
			case WARNING:
				
				test.complain("WARNING");
				test.complain("ERROR");
				break ;
				
			case ERROR:
				
				test.complain("ERROR");
				break ;
				
			default:
				if (!input.empty()) {
					std::cout << "[ Probably complaining about insignificant problems ]";
					std::cout << std::endl;
				}
				break ;	
		}

	} 
	else
		std::cout << std::endl;
	return (0);
}
