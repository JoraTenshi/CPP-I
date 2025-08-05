/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:24:59 by jcallejo          #+#    #+#             */
/*   Updated: 2025/02/18 11:38:26 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
	private:
		std::string	_name;

	public:

		/**
		 * @brief Construct a new Zombie object
		 * 
		 */
		Zombie();

		/**
		 * @brief Destroy the Zombie object
		 * 
		 */
		~Zombie();

		/**
		 * @brief Construct a new Zombie object
		 * 
		 */
		Zombie(std::string zombieName);

		/**
		 * @brief Announces zombie with message
		 * 
		 */
		void	announce ( void ) const;
		
	};
	
/**
 * @brief Creates and allocates a zombie object
 * 
 * @param name 
 * @return Zombie* 
 */
Zombie* newZombie (std::string name);

/**
 * @brief Creates a Chump
 * 
 * @param name 
 */
void	randomChump (std::string name);

#endif