/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:33:01 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/27 18:48:58 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	Dog(std::string const);
	Dog(Dog const &);
	Dog & operator=(Dog const &);
	~Dog( void );
	void makeSound( void ) const;

};

#endif