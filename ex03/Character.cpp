/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:19:49 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/31 17:25:01 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	this->_name = name;
	this->_size = 0;
	return;
}

Character::Character() : _name("Nameless") , _size(0)
{
	return;
}

Character & Character::operator=(Character const &other)
{
	this->_name = other._name;
	this->_size = other._size;
	for (size_t i = 0; i < 4; i++)
	{
		this->_inventory[i] = other._inventory[i];
	}
	return (*this);
}

Character::Character(Character const &other)
{
	*this = other;
	return;
}

Character::~Character()
{
	return;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (this->_size < 4)
	{
		this->_inventory[this->_size] = m;
		this->_size++;
		std::cout << m->getType() << "Materia added\n";
	}
	else
		std::cout << "Inventory is full\n";
}

void Character::unequip(int idx)
{
	if (this->_size > 0 && idx >= 0 && idx < 4)
	{
		std::cout << this->_inventory[idx]->getType() << " Materia unequip\n";
		this->_inventory[idx] = NULL;
		this->_size--;
	}
	else
		std::cout << "Nothing to unequip\n";
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		this->_inventory[idx]->use(target);
	}
	else
		std::cout << "Bad use of Materia\n";
}