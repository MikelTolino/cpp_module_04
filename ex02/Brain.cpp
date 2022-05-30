/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:16:09 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/30 13:21:38 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->counter = 0;
	std::cout << "Default Brain constructor called\n";
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor called\n";
}

Brain::Brain(Brain const &other)
{
	*this = other;
	return;
}

Brain & Brain::operator=(Brain const &other)
{
	this->counter = other.counter;
	return (*this);
}

void Brain::newIdea(std::string const idea)
{
	this->ideasNow[this->counter] = idea;
	this->counter++;
	if (this->counter == 100)
		this->counter = 0;
}