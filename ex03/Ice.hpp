/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:35:03 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 16:11:29 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
	Ice();
	~Ice();
	Ice & Ice::operator=(Ice const &other);
	Ice(Ice const &other);
	Ice *clone() const;
	void use(ICharacter &target);
};

#endif