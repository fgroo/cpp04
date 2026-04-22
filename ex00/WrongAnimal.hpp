/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:35:13 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/22 18:57:53 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "iostream"

class WrongAnimal {
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal &other );
		WrongAnimal			&operator=( const WrongAnimal &other );
		~WrongAnimal( void );
		const std::string	getType(void) const;
		void				makeSound( void ) const;
	protected:
		std::string	_type;
};

#endif
