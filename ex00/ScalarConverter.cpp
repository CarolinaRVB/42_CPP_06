/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 07:49:03 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/20 19:35:54 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

/*
    First convert from string literal to it's type
    Then just apply type casting to get the others
*/

int check_set(char c, std::string set) {
    for (int i = 0; set[i]; i++) {
        if (set[i] == c)
            return (0);
    }
    return (1);
}

void    print_result(char charType, int intType, float floatType, double doubleType)
{
    // (void)intType;
    // (void)floatType;
    // (void)doubleType;
    // (void)charType;

    std::cout << "char: " << charType << "\n";
    std::cout << "int: " << intType << "\n";
    std::cout << "float: " << std::fixed << std::setprecision(2) << floatType << "f\n";
    std::cout << "double: " << doubleType << "\n";
}

bool   getFloatConversion(std::string literal) {
    int found = 0;
    int floatType = std::numeric_limits<float>::quiet_NaN();
    std::string floats = "0123456789.f";
   
    for (unsigned int long i = 0; literal[i]; i++) {
        if (literal.length() - 1 == i)
            found = 1;
        if (check_set(literal[i], floats))
            break ;
    }
    // if (found)
        // floatType = std::atof(literal.c_str());
    return floatType;
}


void ScalarConverter::convert(std::string literal) {

    const char *literalPtr = literal.c_str();
    const char *doubles = "0123456789.";
    (void)doubles;
    
    float   floatType;
    char    charType = '\0';
    int     intType = 0;
    double  doubleType = 0.0;
    
    // charType = static_cast<char>(literalPtr);
    // floatType = getFloatConversion(literal);
    // std::cout << "Atof result: " << std::atof(literal.c_str()) << std::endl;
    intType = std::atoi(literalPtr);
    // intType = static_cast<int>(intType);
    
    floatType = std::atof(literalPtr);
    if (floatType == 0 && literal != "0")
        floatType = std::numeric_limits<float>::quiet_NaN();
    
    floatType = static_cast<float>(floatType);

    std::cout << "literal: " << static_cast<int>(literal) << 

    std::cout << "char: " << charType << "\n";
    std::cout << "int: " << intType << "\n";
    std::cout << "float: " << std::fixed << std::setprecision(2) << floatType << "f\n";
    std::cout << "double: " << doubleType << "\n";
    // print_result(charType, intType, floatType, doubleType);    // std::cout << std::fixed << std::setprecision(2) << "Value is " << type << "f\n";
}