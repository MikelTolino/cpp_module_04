/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:21:55 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 13:26:39 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#define NUM 10

int main()
{
	const Animal *c = new Cat();
	const Animal *d = new Dog();
	Animal *animals[NUM];

	std::cout << "---------------- BRAIN IDEAS -----------------------\n\n";

	Brain *b = new Brain();

	b->newIdea("What a wonderful idea, love it!!!");
	b->newIdea("Hi");
	b->newIdea("I have to pee!!");
	b->newIdea("I love my mum!!!");
	b->showIdeas();

	std::cout << "------------- ARRAY OF ANIMALS --------------------------\n\n";

	for (size_t i = 0; i < NUM; i++)
	{
		if (i < NUM / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (size_t j = 0; j < NUM; j++)
	 	delete animals[j];
	delete c;
	delete d; // should not create a leak

  	std::cout << "----------------- DOG -------------------------\n";

	Dog *dog1 = new Dog();
	dog1->setBrain(b);
	Dog *dog2 = new Dog(*dog1);
	dog1->getBrain()->showIdeas();
	dog2->getBrain()->showIdeas();

 	std::cout << "---------------- CAT --------------------------\n";

	Cat *Cat1 = new Cat();
	Cat1->setBrain(b);
	Cat *Cat2 = new Cat(*Cat1);
	Cat1->getBrain()->showIdeas();
	Cat2->getBrain()->showIdeas();

 	std::cout << "----------------- INSTANCIATE ANIMALS ------------------------------\n";
/*	Animal a1;
	Animal a2;
	Animal a3;
	Animal a4;*/
	return 0;
}
