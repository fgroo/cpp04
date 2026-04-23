/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:50:05 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/23 12:51:21 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain	&Brain::operator=(const Brain &other) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &other)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}