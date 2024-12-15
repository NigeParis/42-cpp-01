/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nige42 <nige42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:48:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/15 18:37:30 by nige42           ###   ########.fr       */
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

		
		
		if (readfile.eof() && line.find_last_of('\n'))
			writefile << findReplace(line, argv[S1], argv[S2]);
		else
			writefile << findReplace(line, argv[S1], argv[S2]) << std::endl;
	
		
	}






	
	readfile.close();
	writefile.close();
	return 0;
}