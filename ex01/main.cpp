/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroo <student@42.eu>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:01:00 by fgroo             #+#    #+#             */
/*   Updated: 2026/04/23 13:35:57 by fgroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << std::endl << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;
	
	wrongCat->makeSound();
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongCat;

	std::cout << std::endl << std::endl << std::endl;

	Animal	*SmartAnimals[100];

	for (int i = 0; i < 100; i++) {
		if (i < 50)
			SmartAnimals[i] = new Dog();
		else
			SmartAnimals[i] = new Cat();
	}

	for (int i = 0; i < 100; i++) {
		SmartAnimals[i]->makeSound();
	}

	for (int i = 0; i < 100; i++) {
		delete SmartAnimals[i];
	}
	
	Dog	SmartDog  = Dog("SmartDog");
	Cat	SmartCat  = Cat("SmartCat");

	SmartDog.setIdeas("200 IQ BARK BARK!!");
	SmartCat.setIdeas("200 IQ MEOW MEOW!!");

	Dog SmartDog_cpy = SmartDog;
	Cat SmartCat_cpy = SmartCat;

	std::cout << "Original SmartDog: "<< SmartDog.getIdeas() << " - Address: " << &SmartDog << std::endl;
	std::cout << "Original SmartCat: "<< SmartCat.getIdeas() << " - Address: " << &SmartCat << std::endl;
	std::cout << "Copy SmartDog: "<< SmartDog_cpy.getIdeas() << " - Address: " << &SmartDog_cpy << std::endl;
	std::cout << "Copy SmartCat: "<< SmartCat_cpy.getIdeas() << " - Address: " << &SmartCat_cpy << std::endl;

	SmartDog_cpy.setIdeas("New Idea");
	SmartCat_cpy.setIdeas("New Idea");

	std::cout << "Original SmartDog: "<< SmartDog.getIdeas() << " - Address: " << &SmartDog << std::endl;
	std::cout << "Original SmartCat: "<< SmartCat.getIdeas() << " - Address: " << &SmartCat << std::endl;
	std::cout << "Copy SmartDog: "<< SmartDog_cpy.getIdeas() << " - Address: " << &SmartDog_cpy << std::endl;
	std::cout << "Copy SmartCat: "<< SmartCat_cpy.getIdeas() << " - Address: " << &SmartCat_cpy << std::endl;
	
	return 0;
}