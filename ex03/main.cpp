/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:57:53 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/29 15:33:50 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(){
	DiamondTrap	Marc("Marc");
	DiamondTrap	Alain("Alain");

	Marc.whoAmI();
	Marc.attack("Alain");
	Alain.takeDamage(Marc.getAttackDamage());
	Alain.beRepaired(10);
	Alain.whoAmI();
	return 0;
}