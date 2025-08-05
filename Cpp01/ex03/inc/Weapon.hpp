/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:04:11 by jcallejo          #+#    #+#             */
/*   Updated: 2025/02/24 12:55:16 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string	_type;
		
	public:
	
		/**
		 * @brief Construct a new Weapon object
		 * 
		 */
		Weapon();

		/**
		 * @brief Construct a new Weapon object
		 * 
		 * @param type 
		 */
		Weapon(std::string type);

		/**
		 * @brief Destroy the Weapon object
		 * 
		 */
		~Weapon();
		
		/**
		 * @brief Get the Type object
		 * 
		 * @return std::string 
		 */
		std::string	getType() const;

		/**
		 * @brief Set the Type object
		 * 
		 */
		void		setType(std::string type);
};

#endif