/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:56:16 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/23 13:33:58 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	this->_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(std::string name) : Animal("Cat") {
	(void)name;
	this->_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	this->_brain = new Brain();
	*this->_brain = *other._brain;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other), *this->_brain = *other._brain;
	return *this;
}

Cat::~Cat(void) {
	if (this->_brain)
		delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "Meow meow!" << std::endl;
}

const std::string	Cat::getIdeas( void ) const {
	return this->_brain->ideas[0];
}

void	Cat::setIdeas( std::string idea ) {
	this->_brain->ideas[0] = idea;
}
