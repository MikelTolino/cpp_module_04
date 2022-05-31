/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:55:04 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 16:07:36 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	return;
}

AMateria::AMateria() : type("No type")
{
	return;
}

AMateria & AMateria::operator=(AMateria const &other)
{
	this->type = other.type;
	return (*this);
}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
	return;
}

AMateria::~AMateria()
{
	return;
}

std::string const &AMateria::getType() const
{
	return this->type;
}
