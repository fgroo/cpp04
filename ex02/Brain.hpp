/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:47:37 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/23 11:49:27 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "iostream"

class Brain {
	public:
		std::string	ideas[100];

		Brain(void);
		Brain(const Brain &other);
		Brain		&operator=(const Brain &other);
		~Brain(void);
};

#endif