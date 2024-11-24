/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 07:49:03 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/24 15:42:24 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string literal) {
    
    DataType dtype = getType(literal);
    
    switch (dtype) {
        case 0:
            convertInt(literal);
            break;
        case 1:
            convertChar(literal);
            break;
        case 2:
            convertFloat(literal);
            break;
        case 3:
            convertDouble(literal);
            break;
        default:
            printError();
            break;
    }
}
 