/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:33:55 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/27 18:48:41 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	Cat(std::string const);
	Cat(Cat const &);
	Cat & operator=(Cat const &);
	~Cat( void );
	void makeSound( void ) const;
};

#endif