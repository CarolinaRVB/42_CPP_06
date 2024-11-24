/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter_checkType.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:30:50 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/24 16:46:30 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

int isFloat(std::string literal) {
    std::string floats = "0123456789.f";
    int i = 0;
    if (literal[0] == '.' || literal[0] == 'f'
        || literal[literal.length() - 1] == '.'
        || (literal.find('f') < literal.length() && literal[literal.length() - 1] != 'f'))
        return (1);

    if (literal == "inff" || literal == "-inff")
        return (0);
    if (literal[0] == '+' || literal[0] == '-')
        i++;
    while (literal[i]) {
        if (check_set(literal[i], floats))
            return (1);
        i++;
    }
    return (0);
}

int isDouble(std::string literal) {
    std::string doubles = "0123456789.";
    int i = 0;

    if (literal[0] == '.' || (literal[literal.length() - 1] == '.'))
        return (1);
    if (literal[0] == '-' || literal[0] == '+')
        i++;
    if (literal == "inf" || literal == "-inf")
        return (0);
    while (literal[i]) {
        if (check_set(literal[i], doubles))
            return (1);
        i++;
    }
    return (0);   
}

int isInt(std::string literal) {
    int i = 0;

    if (literal[0] == '-' || literal[0] == '+')
        i++;
    if (literal[i])
    {
        while (literal[i]) {
            if (!isdigit(literal[i]))
                return (1);
            i++;
        }
        return (0);
    }
    return (1);
}

int isChar(std::string literal) {
    if (literal.length() == 1 && isascii(literal[0]) && !isdigit(literal[0]))
        return (0);
    return (1);
}
