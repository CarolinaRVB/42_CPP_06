/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:11:58 by crebelo-          #+#    #+#             */
/*   Updated: 2024/11/20 15:46:04 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string.h>
# include <cstdlib>
# include <iomanip>
# include <limits>

class ScalarConverter
{
	private:
		ScalarConverter();
	
	public:
		static void	convert(std::string literal);
};

#endif