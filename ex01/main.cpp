/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:57:53 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/29 12:51:36 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(){
	ClapTrap Bob("Bob");
	ScavTrap Carlos("Carlos");

	Bob.attack("Carlos");
	Carlos.takeDamage(Bob.getAttackDamage());
	Carlos.beRepaired(1);
	Carlos.guardGate();
	Carlos.attack("Bob");
	Bob.takeDamage(Carlos.getAttackDamage());
	return 0;
}