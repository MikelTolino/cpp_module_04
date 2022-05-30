/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:21:55 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/30 13:21:20 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal *c = new Cat();
	const Animal *d = new Dog();
	const Animal *animals[100];
	Brain *b = new Brain();

	Animal *a = new Animal();

	b->newIdea("What a wonderful idea, love it!!!");
	b->newIdea("Hi");
	b->newIdea("What a wonderful idea, love it!!!");
	b->newIdea("What a wonderful idea, love it!!!");
	for (size_t i = 0; i < 50; i++)
		animals[i] = new Dog();
	for (size_t k = 50; k < 100; k++)
		animals[k] = new Cat();
	for (size_t i = 0; i < 100; i++)
		delete animals[i];
	delete c;
	delete d; // should not create a leak
}