/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:34:46 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/22 18:53:40 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat( void );
		Cat( std::string name);
		Cat( const Cat &other );
		Cat	&operator=( const Cat &other );
		virtual	~Cat( void );
		void	makeSound( void ) const;

};

#endif