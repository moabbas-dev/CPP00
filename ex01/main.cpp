/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabbas <moabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:15:05 by moabbas           #+#    #+#             */
/*   Updated: 2024/09/11 21:27:08 by moabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.hpp" 
#include <sstream> 

int main()
{
    std::string input;
    Phonebook phonebook;
	int id;
    while (1)
    {
        std::cout << "What do you need ?" << std::endl;
        std::cout << "\tADD: add a new contact" << std::endl;
        std::cout << "\tSEARCH: search for an existing contact" << std::endl;
        std::cout << "\tEXIT: exit the program" << std::endl;
        std::cout << ">> ";
        std::cin >> input;
        if (input == "EXIT")
            break;
        else if (input == "ADD")
            phonebook.addContact();
        else if (input == "SEARCH")
        {
            phonebook.displayContacts();
            std::cout << "Which id do you need ?" << std::endl;
            std::cin >> input;
			std::stringstream ss(input);
			ss >> id;
			if (ss.fail() || id  < 0 || id > phonebook.get_Index() - 1)
				std::cout << "Invalid Id!"<< std::endl;
			else
				phonebook.search_by_id(id);
        }
        else
            std::cout << "Invalid input!";
    }
    return 0;
}
