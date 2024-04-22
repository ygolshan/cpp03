/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:02:16 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/28 11:11:57 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << " ScavTrap constructor called\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << " ScavTrap destructor called\n";
}

ScavTrap::ScavTrap(const std::string& name)
{
    Name = name;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << " ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& ins) : ClapTrap(ins)
{
    *this = ins;
    std::cout << " ScavTrap ins constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& variable)
{
    Name = variable.Name;
    Hit_points = variable.Hit_points;
    Energy_points = variable.Energy_points;
    Attack_damage = variable.Attack_damage;
    std::cout << " ScavTrap operator= called\n";
    return *this;
}

void    ScavTrap::attack(const std::string& target)
{
    std::cout << " ScavTrap " << Name << " attack " << target << ", causing " << Attack_damage << " points of damage!\n";
}

void    ScavTrap::guardGate()
{
    std::cout << " ScavTrap " << Name << " have enterred in Gate keeper mode\n";
}