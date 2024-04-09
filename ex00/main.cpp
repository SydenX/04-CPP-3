/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:57:53 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/29 11:28:01 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(){
	ClapTrap Bob("Bob");
	ClapTrap Patrick("Patrick");

	Bob.attack("patrick");
	Patrick.takeDamage(Bob.getAttackDamage());
	Patrick.beRepaired(1);

	Bob.attack("patrick");
	Patrick.takeDamage(Bob.getAttackDamage());
	Bob.attack("patrick");
	Patrick.takeDamage(Bob.getAttackDamage());
	Bob.attack("patrick");
	Patrick.takeDamage(Bob.getAttackDamage());
	return 0;
}