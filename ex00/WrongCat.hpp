/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:36:16 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/23 12:00:31 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP


# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( std::string name);
		WrongCat( const WrongCat &other );
		WrongCat	&operator=( const WrongCat &other );
		~WrongCat( void );
		void		makeSound( void ) const;

};

#endif
