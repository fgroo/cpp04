/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:31:00 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/22 18:59:21 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"

class Animal {
	public:
		Animal( void );
		Animal( std::string type );
		Animal( const Animal &other );
		Animal				&operator=( const Animal &other );
		virtual	~Animal( void );
		const std::string	getType( void ) const;
		virtual void		makeSound( void ) const;
	protected:
		std::string	_type;
};

#endif
