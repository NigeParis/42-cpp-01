/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpenAndReplace.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:03:55 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/16 09:34:05 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OpenAndReplace.hpp"

int openfile(std::ifstream *readfile, std::string file) {

	if (!readfile) {
		std::cout << "Error: Null pointer" << std::endl;
		return (0);
	}
	if (file.empty()) {

		std::cout << "Error: input file name missing" << std::endl;
		return (0);
	}
	readfile->open(file.c_str());
	if (readfile->is_open()) {
		std::cout << "File open" << std::endl;
	}
	else {
		std::cout << "Error: file not opened or not found" << std::endl;
		return (0);	
	}	
	return (1);
}

int outputfile(std::ofstream *writefile, std::string file, std::string dotname) {

	std::string filename;

	if (!writefile) {
		std::cout << "Error: Null pointer" << std::endl;
		return (0);
	}
	if (file.empty()) {

		std::cout << "Error: output file name missing" << std::endl;
		return (0);
	}	
	file = file.substr(0, file.find_last_of("."));
	filename = file + dotname;
	
	writefile->open(filename.c_str());
	if (writefile->is_open()) {
		std::cout << "Output file created" << std::endl;
	}
	else {
		std::cout << "Error: file not created" << std::endl;
		return (0);	
	}	
	return (1);
}

std::string findReplace(std::string line, std::string toFind, std::string toReplace) {

	(void)toFind;
	(void)toReplace;
	std::string newstr = line;
	size_t pos = line.find(toFind);

	if (toFind.empty())
		return (line);
	
	while (pos < newstr.length()) {

		
		newstr = line.substr(0, pos) + toReplace + line.substr((pos + toFind.length()));
		line = newstr;
		pos = line.find(toFind);
		
	}
	
	return (newstr);
}

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

