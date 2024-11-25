/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:21:13 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/25 13:21:07 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::~Serializer() {
    std::cout << "Serializer destructor called\n";
}

/*  Converts the pointer Data to a uintptr_t integer representation
    The result will be a numerical representation of the memory address
    which is dependent on the memory address assigned to data at runtime, varying 
    through executions
*/
uintptr_t Serializer::serialize(Data* ptr) {
    return(reinterpret_cast<uintptr_t>(ptr));
}

/*  Converts the uintptr_t value back into a Data* pointer, pointing to the 
    same object as the initial data 
*/
Data* Serializer::deserialize(uintptr_t raw) {
    return(reinterpret_cast<Data*>(raw));
}