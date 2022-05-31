/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 00:26:41 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 16:13:18 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;

public:
	AMateria(std::string const &type);
	AMateria();
	AMateria(AMateria const &);
	AMateria & operator=(AMateria const &);
	virtual ~AMateria();
	std::string const &getType() const; // Returns the materia type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif