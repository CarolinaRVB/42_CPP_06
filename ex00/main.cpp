/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:11:33 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/24 15:42:38 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    
    if (argc != 2)
        return (1);
    
    ScalarConverter::convert(argv[1]);
}