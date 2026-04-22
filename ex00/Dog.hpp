/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:38:06 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/22 18:59:31 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog( void );
		Dog( std::string name);
		Dog( const Dog &other );
		Dog	&operator=( const Dog &other );
		~Dog( void );
		void	makeSound( void ) const;
};

#endif
