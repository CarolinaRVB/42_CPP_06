/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 07:49:03 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/16 12:35:05 by crebelo-         ###   ########.fr       */
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

int getDataType(std::string literal) {
    std::string floats = "0123456789.f";
    // char *doubles = "0123456789.";
    
    int found = 0;
    for (int i = 0; literal[i]; i++) {
        if (literal.length() == 1)
            found = 1;
        if (check_set(literal[i], floats))
            break ;
    }
    if (found) {
        float floatType = static_cast<float>(std::atof(literal.c_str()));
        return floatType;
    }
}

void ScalarConverter::convert(std::string literal) {
    // const char *ptr = literal.c_str();
    int type = getDataType(literal);
    std::cout << "Value is " << type << "\n";
}