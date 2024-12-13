/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpenAndReplace.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:04:31 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/13 13:11:28 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef OPENANDREPLACE_HPP
#define OPENANDREPLACE_HPP
#include <fstream> 
#include <iostream>
#include <string>


int openfile(std::ifstream *readfile, std::string file);
int outputfile(std::ofstream *writefile, std::string file);






#endif
