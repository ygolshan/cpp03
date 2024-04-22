/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:02:22 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/28 11:12:24 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << " ClapTrap constructor called\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << " ClapTrap destructor called\n";
}

ClapTrap::ClapTrap(const std::string& name)
{
    Name = name;
    std::cout << " ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& ins)
{
    *this = ins;
    std::cout << " ClapTrap ins constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& variable)
{
    Name = variable.Name;
    Hit_points = variable.Hit_points;
    Energy_points = variable.Energy_points;
    Attack_damage = variable.Attack_damage;
    std::cout << " ClapTrap operator= called\n";
    return *this;
}

void    ClapTrap::attack(const std::string& target)
{
    if(Energy_points <= 0)
        std::cout << " no enought energy\n";
    else
    {
        Energy_points--;
        std::cout << " ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!\n";
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{   
    Hit_points -= amount;
    if(Hit_points <= 0)
        std::cout << " ClapTrap " << Name << " is dead!\n";
    else
        std::cout << " ClapTrap " << Name << " takes " << amount << " points of damage!\n";
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(Energy_points <= 0)
        std::cout << " no enought energy\n";
    else
    {
        Hit_points += amount;
        Energy_points--;
        std::cout << " ClapTrap " << Name << " is repaired by " << amount << " points!\n";
    }
}