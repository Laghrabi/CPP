/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:46:19 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/16 13:48:01 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
    if (ac != 4 || av[2][0] == '\0')
    {
        std::cerr << "Wrong Arguments" << std::endl;
        return (1);
    }
    
    size_t prev_pos, pos;
    std::string filename = av[1];
    std::ifstream infile(filename.c_str());
    std::ofstream outfile((filename + ".replace").c_str());
    std::string s1 = av[2], s2 = av[3];
    std::stringstream buffer;
    std::string content;
    
    if (infile.is_open() == false || outfile.is_open() == false)
    {
        std::cerr << "Error: Could not open input file." << std::endl;
        return (1);
    }
    else
    {
        buffer << infile.rdbuf();
        content = buffer.str();
        pos = prev_pos = 0;
        pos = content.find(s1, pos);
        while (pos != std::string::npos)
        {
            outfile << content.substr(prev_pos, pos - prev_pos) << s2;
            pos += s1.length();
            prev_pos = pos;
            pos = content.find(s1, pos);
        }
        outfile << content.substr(prev_pos, pos - prev_pos);
    }
    return (0);
}
