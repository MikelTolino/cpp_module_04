/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:35:15 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 19:03:58 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	~Cure();
	Cure & operator=(Cure const &other);
	Cure(Cure const &other);
	Cure *clone() const;
	void use(ICharacter &target);
};

#endif