/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:39:25 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/22 18:56:51 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &other) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

const std::string	Animal::getType(void) const {
	return this->_type;
}

void	Animal::makeSound(void) const {
	std::cout << "Animal makes a sound" << std::endl;
}