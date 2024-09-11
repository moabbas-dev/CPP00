/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabbas <moabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:50:29 by moabbas           #+#    #+#             */
/*   Updated: 2024/08/31 19:08:44 by moabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc == 1)
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	for (int i = 1;i < argc; i++)
	{
		for (size_t j = 0; j < std::strlen(argv[i]); j++)
			std:: cout << (char)std::toupper(argv[i][j]);
		if (i == argc - 1)
			std::cout << "\n";
	}
	return 0;
}
