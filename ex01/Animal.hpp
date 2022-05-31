/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:22:50 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 12:28:05 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal( void );
	Animal(std::string const);
	Animal(Animal const &);
	Animal & operator=(Animal const &);
	std::string getType( void ) const;
	void setType( std::string );
	virtual ~Animal( void );
	virtual void makeSound( void ) const;
};

#endif