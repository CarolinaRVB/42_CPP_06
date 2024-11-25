/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:49:25 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/25 13:31:22 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"
#include <stdint.h> // Check if the compiler supports this


class   Serializer {
  private:
    Serializer();
    Serializer(const Serializer& serializer);
    Serializer& operator=(const Serializer& serializer);
  public:  
    ~Serializer();
  
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);    
};

#endif