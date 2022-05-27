/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:27:09 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/27 18:56:19 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("")
{
	std::cout << "Default WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(std::string const type)
{
	this->type = type;
	std::cout << "Parametrized WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	*this = other;
	std::cout << "Copy constructor called\n";
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	this->type = other.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "An Wronganimal makes some sound!\n";
}
