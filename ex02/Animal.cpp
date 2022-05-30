/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:27:09 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/27 18:49:52 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("")
{
	std::cout << "Default Animal constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called\n";
}

Animal::Animal(std::string const type)
{
	this->type = type;
	std::cout << "Parametrized Animal constructor called\n";
}

Animal::Animal(Animal const &other)
{
	*this = other;
	std::cout << "Copy constructor called\n";
}

Animal &Animal::operator=(Animal const &other)
{
	this->type = other.type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return this->type;
}

void Animal::setType(std::string type)
{
	this->type = type;
}

void Animal::makeSound(void) const
{
	std::cout << "An animal makes some sound!\n";
}
