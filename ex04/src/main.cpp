/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:48:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/16 09:34:30 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OpenAndReplace.hpp"
#include "Errors.hpp"
#define NBR_ARGS 4
#define FILE 1
#define S1 2
#define S2 3

int main(int argc, char *argv[])
{
	std::ifstream readfile;
	std::ofstream writefile;
	std::string line;
	
	if (!isArgsValid(argc, NBR_ARGS))
		return (1);
	if (openfile(&readfile, argv[FILE])) {
		if (outputfile(&writefile, argv[FILE], ".replace")) {
	
			while (readLine(&readfile, &line)) {
	
				if (readfile.eof() && line.find_last_of('\n')) {
					writefile << findReplace(line, argv[S1], argv[S2]);
				} else {
					writefile << findReplace(line, argv[S1], argv[S2]) << std::endl;
				}	
			}
		}
	}
	readfile.close();
	writefile.close();
	return (0);
}
