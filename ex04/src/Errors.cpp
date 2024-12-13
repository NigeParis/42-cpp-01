/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:31:23 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/13 10:46:56 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Errors.hpp"

int isArgsValid(int argc, int validNbr) {

	if (argc < validNbr) {

		std::cout << "Error: Missing Arguments" << std::endl;
		return (0);
	}
	if (argc > validNbr) {
		
		std::cout << "Error: Too many Arguments" << std::endl;
		return (0);
	}
	return (1);			
}

