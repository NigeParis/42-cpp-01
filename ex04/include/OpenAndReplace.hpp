/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpenAndReplace.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:04:31 by nrobinso          #+#    #+#             */
/*   Updated: 2024/12/16 09:48:22 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef OPENANDREPLACE_HPP
#define OPENANDREPLACE_HPP
#include <fstream> 
#include <iostream>
#include <string>

int openFile(std::ifstream *readfile, std::string file);
int outPutFile(std::ofstream *writefile, std::string file, std::string dotname);
std::string findReplace(std::string line, std::string toFind, std::string toReplace);
int readLine(std::ifstream *readfile, std::string *line);

#endif
