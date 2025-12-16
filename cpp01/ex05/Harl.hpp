/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:34:16 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/16 16:07:15 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

class Harl {
	private:
		typedef void (Harl::*HarlMemFn)(void);
		void debug(void);
		void info(void);
		void warning(void);
		void error(void); 
	public:
		void complain(std::string level);
};

#endif