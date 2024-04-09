/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:57:53 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/29 14:53:58 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(){
	ClapTrap Bob("Bob");
	ScavTrap Carlos("Carlos");
	FragTrap Eugene("Eugene");

	Bob.attack("Carlos");
	Carlos.takeDamage(Bob.getAttackDamage());
	Carlos.beRepaired(1);
	Carlos.guardGate();
	Carlos.attack("Bob");
	Bob.takeDamage(Carlos.getAttackDamage());
	Eugene.attack("Carlos");
	Carlos.takeDamage(Eugene.getAttackDamage());
	Eugene.highFivesGuys();
	Bob.attack("Eugene");
	Eugene.takeDamage(Bob.getAttackDamage());
	return 0;
}