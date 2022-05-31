/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:04:19 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 19:13:42 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	AMateria *m[2];
	m[0] = new Ice();
	m[1] = new Cure();

	Character *matuerso = new Character("Matuerso");
	Character *lolito = new Character("Lolito");
	matuerso->equip(m[0]);
	matuerso->equip(m[1]);
	std::cout << matuerso->getName() << " Useee his magic \n";
	matuerso->use(0, *lolito);

/* 	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src; */
	return 0;
}