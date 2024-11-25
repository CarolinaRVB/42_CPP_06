/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:46:39 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/25 13:29:26 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*
    Usefulness of reinterpret_cast:
        - Raw memory manipulation -> allows the storage of pointers in formats that
        avoid direct pointer access. Allows passing memory addessess (pointers) between different 
        contexts (systems, threads, function etc)
*/

int main() {
    Data    *data = new Data;
    Data    *copy;
    uintptr_t   uintVar;
    
    
    data->nameVar = "default";
    data->valueVar = 10;

    uintVar = Serializer::serialize(data);
    std::cout << "serialize result: " << uintVar << "\n";
    copy = Serializer::deserialize(uintVar);
    std::cout << "original result: " << data->nameVar << ", " << data->valueVar << "\n";
    std::cout << "deserialize result: " << copy->nameVar << ", " << copy->valueVar << "\n";
    delete data;
}