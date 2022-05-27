/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:34:08 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/27 18:55:39 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "Default WrongCat constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called\n";
}

WrongCat::WrongCat(std::string const type)
{
	this->type = type;
	std::cout << "Parametrized WrongCat constructor called\n";
}

WrongCat::WrongCat(WrongCat const &other)
{
	*this = other;
	std::cout << "Copy constructor called\n";
}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Miiiiauuhh!!!!\n";
}
