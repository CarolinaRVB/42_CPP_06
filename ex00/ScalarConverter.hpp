/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:11:58 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/24 16:36:22 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string.h>
# include <cstdlib>
# include <iomanip>
# include <limits>

enum DataType {
    INT,
    CHAR,
    FLOAT,
    DOUBLE,
    UNKNOWN,
};

class ScalarConverter
{
	private:
		ScalarConverter();
	
	public:
		static void	convert(std::string literal);
};

/* convertType*/
void    convertChar(std::string literal);
void    convertInt(std::string literal);
void    convertFloat(std::string literal);
void    convertDouble(std::string literal);


/* checkType */
int isFloat(std::string literal);
int isDouble(std::string literal);
int isInt(std::string literal);
int isChar(std::string literal);

/* utils */
int 		check_set(char c, std::string set);
void    	printError(void);
void    	handleChar(std::string literal);
DataType    getType(std::string literal);

#endif