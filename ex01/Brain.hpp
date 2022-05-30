/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:44:22 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/30 17:47:46 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class Brain
{
private:
	unsigned int counter;
	std::string ideasNow[100];

public:
	Brain( void );
	~Brain( void );
	Brain(Brain const &);
	Brain & operator=(Brain const &);
	void newIdea(std::string const);
	void showIdeas( void ) const;
};

#endif