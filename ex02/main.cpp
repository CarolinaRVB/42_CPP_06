/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:52:43 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/26 09:05:31 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/*
    Here the dynamic cast could be avoided since the classes inherit from
    the Base class, and the function is already returning a Base*
*/
static Base *generate(void) {
    std::srand(std::time(0));
    int i = std::rand() % 3 + 1;
    
    switch (i) {
        case 1:
            return (new A);
        case 2:
            return (new B);
        case 3:
            return (new C);
    }
    return 0;
}
// static Base *generate(void) {
//     std::srand(std::time(0));
//     int i = std::rand() % 3 + 1;
//     switch (i) {
//         case 1:
//         {
//             return (dynamic_cast<Base*>(new A));
//             break;
//         }
//         case 2:
//             return (dynamic_cast<Base*>(new B));
//             break;
//         case 3:
//             return (dynamic_cast<Base*>(new C));
//             break;
//     }
//     return 0;
// }

/*
    - Takes a Base pointer as input. Usefull if we're not sure that the object exists - has a way to check for null.
    - You explicitly check the type of the object that the pointer p is pointing to using dynamic_cast.
    - Returns a valid pointer if successful or a nullptr if not
*/
void identify(Base* p) {
    if (!p)
        std::cout << "Base pointer is NULL\n";
    else if (p == dynamic_cast<A*>(p))
        std::cout << "Base pointer is of type A\n";
    else if (p == dynamic_cast<B*>(p))
        std::cout << "Base pointer is of type B\n";
    else if (p == dynamic_cast<C*>(p))
        std::cout << "Base pointer is of type C\n";
}

/*
    - Takes a Base reference as input. Usefull if we know the object exists. Failure to cast throws exception
    - Perform the type identification without using pointers, typically relying on dynamic_cast directly on the reference.
     -Since a reference cannot be null, no need to worry about null checks here. 
    Instead, rely on dynamic_cast to safely determine the actual type.
    - A failed dynamic_cast with references throws an exception, you must catch the exception (std::bad_cast) 
    to handle the failure and continue checking other types. A dynamic_cast with references returns an object, hence
    the (void) before the cast to prevent the unused variable errors.
*/
void identify(Base& p) {
    
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "Base pointer is of type A\n";
    }
    catch (std::exception&) {}

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "Base pointer is of type B\n";
    }
    catch (std::exception&) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "Base pointer is of type C\n";
    }
    catch (std::exception&) {}
}

int main() {
    Base* baseptr;
    
    baseptr = generate();
    std::cout << "Memory address baseptr is holding: " << baseptr << "\n";
    
    identify(baseptr); // identify through pointer
    
    identify(*baseptr); // identify through reference
    
    return 0;
}