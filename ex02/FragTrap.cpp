/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:02:33 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/28 11:13:06 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << " Fragtrap constructor called\n";
}

FragTrap::~FragTrap()
{
    std::cout << " Fragtrap destructor called\n";
}

FragTrap::FragTrap(const std::string& name)
{
    Name = name;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << " Fragtrap constructor called\n";
}

FragTrap::FragTrap(const FragTrap& ins) : ClapTrap(ins)
{
    *this = ins;
    std::cout << " Fragtrap ins constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& variable)
{
    Name = variable.Name;
    Hit_points = variable.Hit_points;
    Energy_points = variable.Energy_points;
    Attack_damage = variable.Attack_damage;
    std::cout << " Fragtrap operator= called\n";
    return *this;
}

void    FragTrap::attack(const std::string& target)
{
    std::cout << " FragTrap " << Name << " attack " << target << ", causing " << Attack_damage << " points of damage!\n";
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << " FragTrap " << Name << " is asking for high fives!\n";
}