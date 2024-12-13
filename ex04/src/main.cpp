/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:48:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/13 13:56:30 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OpenAndReplace.hpp"
#include "Errors.hpp"
#define NBR_ARGS 4
#define FILE 1
#define S1 2
#define S2 3


int readLine(std::ifstream *readfile, std::string *line) {

	if (readfile == NULL || line == NULL)
		return (std::cout << "error: pointer NULL" << std::endl, 0);

	if (!readfile->is_open())
		return (std::cout << "error: file not open" << std::endl, 0);
	
	if (!std::getline(*readfile, *line)) {
		return (0);		
	}
	return (1);
}




int main(int argc, char *argv[])
{
	std::ifstream readfile;
	std::ofstream writefile;
	std::string line;
	
	if (!isArgsValid(argc, NBR_ARGS))
		return (1);
	
	openfile(&readfile, argv[FILE]);
	outputfile(&writefile, argv[FILE], ".replace");
	
	
	while (readLine(&readfile, &line)) {

	std::cout << line << std::endl;
	}
	readfile.close();
	writefile.close();
	return 0;
}