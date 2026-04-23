/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:38:06 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/23 13:33:34 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog( void );
		Dog( std::string name);
		Dog( const Dog &other );
		Dog					&operator=( const Dog &other );
		virtual				~Dog( void );
		void				makeSound( void ) const;
		const std::string	getIdeas( void ) const;
		void				setIdeas( std::string idea );
	private:
		Brain				*_brain;
};

#endif
