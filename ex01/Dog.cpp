/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:58:02 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/23 13:34:14 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(std::string name) : Animal("Dog") {
	(void)name;
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	this->_brain = new Brain();
	*this->_brain = *other._brain;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &other) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other), *this->_brain = *other._brain;
	return *this;
}

Dog::~Dog(void) {
	if (this->_brain)
		delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "BARK BARK!!!" << std::endl;
}

const std::string	Dog::getIdeas( void ) const {
	return this->_brain->ideas[0];
}

void	Dog::setIdeas( std::string idea ) {
	this->_brain->ideas[0] = idea;
}
