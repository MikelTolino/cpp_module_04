/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:33:01 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/30 13:18:19 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

private:
	Brain *brain;

public:
	Dog( void );
	Dog(std::string const);
	Dog(Dog const &);
	Dog & operator=(Dog const &);
	~Dog( void );
	void makeSound( void ) const;
	void setBrain(Brain const & brain);
};

#endif