/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:01:58 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/28 11:26:16 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_hpp
# define ClapTrap_hpp

# include <iostream>
# include <string>

class ClapTrap
{

    std::string Name;
    int Hit_points;
    int Energy_points;
    int Attack_damage;

public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& ins);
    ClapTrap& operator=(const ClapTrap& variable);
    ~ClapTrap();
};

#endif