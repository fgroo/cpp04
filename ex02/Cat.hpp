/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:34:46 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/23 13:33:39 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	public:
		Cat( void );
		Cat( std::string name );
		Cat( const Cat &other );
		Cat					&operator=( const Cat &other );
		virtual				~Cat( void );
		void				makeSound( void ) const;
		const std::string	getIdeas( void ) const;
		void				setIdeas( std::string idea );
	private:
		Brain				*_brain;
};

#endif