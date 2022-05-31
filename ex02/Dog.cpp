/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:34:40 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 13:12:22 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->setType("Dog");
	this->brain = new Brain();
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
	this->brain = new Brain();
	std::cout << "Parametrized Dog constructor called\n";
}

Dog::Dog(Dog const &other)
{
	*this = other;
	*(this->brain) = *(other.brain);
	std::cout << "Copy constructor called\n";
}

Dog &Dog::operator=(Dog const &other)
{
	std::cout << "Asignation Dog constructor called\n";
	this->type = other.type;
	this->brain = other.brain;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Guaaaauuu!!!!\n";
}

void Dog::setBrain(Brain *brain)
{
	*(this->brain) = *brain;
}

Brain* Dog::getBrain( void) const
{
	return (this->brain);
}
