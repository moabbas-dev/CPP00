/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabbas <moabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:31:48 by moabbas           #+#    #+#             */
/*   Updated: 2024/09/11 21:21:17 by moabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contacts.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

Phonebook::Phonebook() : oldest(0), index(0) {}

void Phonebook::addContact()
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::cout << "\tEnter the First name: " << std::endl;
    std::cin >> firstname;
    std::cout << "\tEnter the last name: " << std::endl;
    std::cin >> lastname;
    std::cout << "\tEnter the nick name: " << std::endl;
    std::cin >> nickname;
    if (index < 8) {
        contacts[index] = Contacts(index, firstname, lastname, nickname);
        index++;
    }
    else {
        contacts[oldest] = Contacts(index, firstname, lastname, nickname);
        oldest = (oldest + 1) % 8;
    }
}

void Phonebook::displayContacts()
{
    std::cout << std::setw(10) << std::right << "Index"       << "|"
              << std::setw(10) << std::right << "First name"  << "|"
              << std::setw(10) << std::right << "Last name"   << "|"
              << std::setw(10) << std::right << "Nick name"   << std::endl;
    for (int i = 0; i < 8; i++) {
        std::string first = contacts[i].getFirstName();
        std::string last = contacts[i].getLastName();
        std::string nick = contacts[i].getNickName();
        std::cout << std::setw(10) << std::right << contacts[i].getIndex()   << "|"
                  << std::setw(10) << std::right << formatString(first, 10) << "|"
                  << std::setw(10) << std::right << formatString(last, 10)  << "|"
                  << std::setw(10) << std::right << formatString(nick, 10)  << std::endl;
    }
}

std::string Phonebook::formatString(std::string& str, size_t max_len) const {
    if (str.length() > max_len)
        return str.substr(0, max_len - 1) + '.';
    return std::string(max_len - str.length(), ' ') + str;
}

void Phonebook::search_by_id(int id)
{
	for (int i = 0;i < index; i++)
	{
		if (id == i)
		{
			std::cout << "First name: " << this->contacts[i].getFirstName() <<std:: endl;
			std::cout << "Last name: " << this->contacts[i].getLastName() <<std:: endl;
			std::cout << "Nick name: " << this->contacts[i].getNickName() <<std:: endl;
			break;
		}
	}
}

int Phonebook::get_Index()
{
	return index;
}
