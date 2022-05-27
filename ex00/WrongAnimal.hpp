/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:22:50 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/27 18:56:31 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal( void );
	WrongAnimal(std::string const);
	WrongAnimal(WrongAnimal const &);
	WrongAnimal & operator=(WrongAnimal const &);
	std::string getType( void ) const;
	void setType( std::string );
	~WrongAnimal( void );
	void makeSound( void ) const;
};

#endif