/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:34:08 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 00:02:42 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Default Cat constructor called\n";
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Default Cat destructor called\n";
}

Cat::Cat(std::string const type)
{
	this->type = type;
	std::cout << "Parametrized Cat constructor called\n";
}

Cat::Cat(Cat const &other)
{
	*this = other;
	std::cout << "Copy constructor called\n";
}

Cat & Cat::operator=(Cat const &other)
{
	std::cout << "Asignation Cat constructor called\n";
	this->type = other.type;
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "Miiiiauuhh!!!!\n";
}

void Cat::setBrain(Brain *brain)
{
	this->brain = brain;
}