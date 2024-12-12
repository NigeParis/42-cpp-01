/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:48:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/12 14:14:56 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {

	std::string str = "HI THIS IS BRAIN";

	std::string *ptrStr = &str;               //pointer to str
	std::string& refStr = str;		   //reference to str


	std::cout << "Adresses :" << std::endl;

	std::cout << "The string prints it's address: ";
	std::cout << "'\033[32m" << &str  << "\033[0m'";
	std::cout << " of str" << std::endl;

	std::cout << "Pointer to a string prints the address pointing to: ";
	std::cout << "'\033[32m" << ptrStr  << "\033[0m'";
	std::cout << " of str" << std::endl;

	std::cout << "Reference to a string prints the address referenced to: ";
	std::cout << "'\033[32m" << &refStr  << "\033[0m'";
	std::cout << " of str" << std::endl;

	std::cout << "Values :" << std::endl;

	std::cout << "The String prints it's value: ";
	std::cout << "'\033[31m" << str  << "\033[0m'";
	std::cout << " of str" << std::endl;

	std::cout << "Pointer to a string prints value it's pointing to: ";
	std::cout << "'\033[31m" << *ptrStr  << "\033[0m'";
	std::cout << " of str" << std::endl;

	std::cout << "Reference to a string prints value it's referenced to: ";
	std::cout << "'\033[31m" << refStr  << "\033[0m'";
	std::cout << " of str" << std::endl;
	
	return (0);	
}