/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:35:54 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 16:16:06 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
	return;
}

Cure & Cure::operator=(Cure const &other)
{
	return (*this);
}

Cure::Cure(Cure const &other)
{
	*this = other;
	return;
}

Cure::~Cure()
{
	return;
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals" << target.getName() << " wounds *\n";
}
