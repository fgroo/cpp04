/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 22:00:33 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/23 22:08:42 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "iostream"

class AMateria
{
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &other);
		AMateria			&operator=(const AMateria &other);
		virtual				~AMateria(void);
		std::string const &	getType() const; //Returns the materia type
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);
	protected:
		std::string			_type;
};