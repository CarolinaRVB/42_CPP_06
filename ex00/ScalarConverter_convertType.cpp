/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter_convertType.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:35:39 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/26 15:44:54 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

void    convertChar(std::string literal) {
    char c = static_cast<char>(literal[0]);
    
    std::cout << "char: " << c << "\n";
    std::cout << "int: " << static_cast<int>(c) << "\n";
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f\n";
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << "\n";   
}

void    convertInt(std::string literal) {
    char *end;
    long int num = std::strtol(literal.c_str(), &end, 10);
   
    if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max()) {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";   
    }
    else {
        handleChar(literal);
        std::cout << "int: " << static_cast<int>(num) << "\n";
    }
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f\n";
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(num) << "\n";
}

void    convertFloat(std::string literal) {
    float num = std::atof(literal.c_str());

    handleChar(literal);
    if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(num) << "\n";
    std::cout << "float: " << std::fixed << std::setprecision(1) <<  num << "f\n";
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(num) << "\n"; 
}

void    convertDouble(std::string literal) {
    char    *end;
    double num = std::strtod(literal.c_str(), &end);

    handleChar(literal);
    if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(num) << "\n";
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f\n";
    std::cout << "double: " << std::fixed << std::setprecision(1) << num << "\n"; 
}
