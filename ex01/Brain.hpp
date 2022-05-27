/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:44:22 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/27 19:48:31 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain
{
private:
	std::string ideasNow [100];
public:
	Brain(/* args */);
	~Brain();
};

Brain::Brain(/* args */)
{
}

Brain::~Brain()
{
}

#endif