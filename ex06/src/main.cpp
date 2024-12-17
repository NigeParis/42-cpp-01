/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:48:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/17 17:42:00 by nrobinso         ###   ########.fr       */
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
	Harl harl;
	std::string input;
	
	if (argc == 2) {

		input = argv[1];
		switch(strToLevel(input)) {

			case DEBUG: 	harl.complain("DEBUG");
				
			case INFO:		harl.complain("INFO");
				
			case WARNING:	harl.complain("WARNING");
				
			case ERROR:		harl.complain("ERROR");
							break;
			default:
						
				if (!input.empty()) {
					std::cout << "[ Probably complaining about insignificant problems ]";
					std::cout << std::endl;
				}
				else
					std::cout << "Error: empty arg " << argv[0] << " [ARG]" << std::endl;
				break ;	
		}
	} 
	else
		std::cout << "Error: missing arg " << argv[0] << " [ARG]"<< std::endl;
	return (0);
}
