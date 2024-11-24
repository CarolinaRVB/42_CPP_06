/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter_utils.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:35:35 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/24 16:36:14 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

int check_set(char c, std::string set) {
    int i = 0;

    if (set[0] == '+' || set[0] == '-')
        i++;
    while (set[i]) {
        if (set[i] == c)
            return (0);
        i++;
    }
    return (1);
}

void    printError(void)
{
    std::cout << "char: impossible\n";        
    std::cout << "int: impossible\n";
    std::cout << "float: nanf\n";
    std::cout << "double: nan\n";
}


void    handleChar(std::string literal) {
    char *end;
    double num = std::strtod(literal.c_str(), &end);

    if (num >= -128.0 && num <= 127.0)
    {
        if (num <= 0.0)
            std::cout << "char: Non displayable\n";
        else
            std::cout << "char: " << static_cast<char>(num) << "\n";
    }
    else
        std::cout << "char: impossible\n";
}

DataType    getType(std::string literal) {
    
    DataType dtype;
    
    if (isInt(literal) == 0)
        dtype = INT;
    else if (isChar(literal) == 0)
        dtype = CHAR;
    else if (isDouble(literal) == 0)
        dtype = DOUBLE;
    else if (isFloat(literal) == 0)
        dtype = FLOAT;
    else
        dtype = UNKNOWN;
    
    return dtype;
}
