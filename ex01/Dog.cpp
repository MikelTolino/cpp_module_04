/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:34:40 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 00:19:53 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->setType("Dog");
	std::cout << "Default Dog constructor called\n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Default Dog destructor called\n";
}

Dog::Dog(std::string const type)
{
	this->type = type;
	std::cout << "Parametrized Dog constructor called\n";
}

Dog::Dog(Dog const &other)
{
	*this = other;
	std::cout << "Copy constructor called\n";
}

Dog &Dog::operator=(Dog const &other)
{
	std::cout << "Asignation Dog constructor called\n";
	this->type = other.type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Guaaaauuu!!!!\n";
}

void Dog::setBrain(Brain *brain)
{
	this->brain = brain;
}