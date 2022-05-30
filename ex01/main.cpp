/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:21:55 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 00:22:24 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#define NUM 10

int main()
{
	const Animal *c = new Cat();
	const Animal *d = new Dog();
	const Animal *animals[NUM];

	std::cout << "---------------------------------------\n"
			  << "Ideas:\n\n";

	Brain *b = new Brain();

	b->newIdea("What a wonderful idea, love it!!!");
	b->newIdea("Hi");
	b->newIdea("I have to pee!!");
	b->newIdea("I love my mum!!!");
	b->showIdeas();

	std::cout << "---------------------------------------\n"
			  << "Array of animals\n\n";

	for (size_t i = 0; i < NUM; i++)
	{
		if (i < NUM / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (size_t i = 0; i < NUM; i++)
		delete animals[i];
	delete c;
	delete d; // should not create a leak
	delete b;

	std::cout << "------------------------------------------\n";

	Dog *dog1 = new Dog;
	Dog *dog2 = new Dog(*dog1);

	delete dog1;
	delete dog2;

	std::cout << "------------------------------------------\n";

	Cat *Cat1 = new Cat;
	Cat *Cat2 = new Cat(*Cat1);

	delete Cat1;
	delete Cat2;

 	std::cout << "------------------------------------------\n";

	Dog *DogA = new Dog;
	Dog *DogB = new Dog;

	*DogA = *DogB;
	delete DogA;
	delete DogB;

	std::cout << "------------------------------------------\n";

	Cat *catA = new Cat;
	Cat *catB = new Cat;

	*catA = *catB;
	delete catA;
	delete catB;
	system("leaks poli");
	return 0;
}