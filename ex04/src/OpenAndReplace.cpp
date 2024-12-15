/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpenAndReplace.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:03:55 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/14 18:27:52 by nige42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OpenAndReplace.hpp"

int openfile(std::ifstream *readfile, std::string file) {

	readfile->open(file.c_str());
	if (readfile->is_open()) {
		std::cout << "file opened" << std::endl;
	}
	else {
		std::cout << "Error: file not opened or not found" << std::endl;
		return (0);	
	}	
	return (1);
}



int outputfile(std::ofstream *writefile, std::string file, std::string dotname) {

	std::string filename;


	file = file.substr(0, file.find_last_of("."));
	filename = file + dotname;
	
	writefile->open(filename.c_str());
	if (writefile->is_open()) {
		std::cout << "output file created" << std::endl;
	}
	else {
		std::cout << "Error: file not created" << std::endl;
		return (0);	
	}	
	return (1);
}
