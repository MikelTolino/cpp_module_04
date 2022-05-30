/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:33:55 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/30 23:43:52 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;

public:
	Cat( void );
	Cat(std::string const);
	Cat(Cat const &);
	Cat & operator=(Cat const &);
	~Cat( void );
	void makeSound( void ) const;
	void setBrain(Brain *brain);
};

#endif