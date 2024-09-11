/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabbas <moabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:31:48 by moabbas           #+#    #+#             */
/*   Updated: 2024/09/11 22:07:45 by moabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

Phonebook::Phonebook() : oldest(0), index(0) {}

int invalid(std::string str)
{
	size_t i;
	for (i = 0; i < str.length(); i++)
	{
		if (!((str.at(i) >= 9 && str.at(i) <= 13) || str.at(i) == ' '))
			return (0);
	}
	if (i == 0)
	{
		std::cout << "Empty name" << std::endl;
		return (1);
	}
	return (0);
}

int invalid_number(std::string num)
{
	for (size_t i = 0; i < num.length(); i++)
	{
		if (num.at(i) < '0' || num.at(i) > '9')
			return (1);
	}
	return (0);
}

void Phonebook::addContact()
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phoneNumber;
	std::string darkestSecret;
	
    std::cout << "\tEnter the First name: " << std::endl;
    std::cin >> firstname;
	
    std::cout << "\tEnter the last name: " << std::endl;
    std::cin >> lastname;
	
    std::cout << "\tEnter the nick name: " << std::endl;
    std::cin >> nickname;
	
	std:: cout << "\tEnter Phone number: " << std::endl;
	std::cin >> phoneNumber;
	if (invalid(firstname) || invalid(lastname) || invalid(nickname) || invalid_number(phoneNumber))
	{
		std::cout << "Invalid Phone number!" << std::endl;
		return ;
	}

    if (index < 8) {
        contacts[index] = Contacts(index, firstname, lastname, nickname, phoneNumber, darkestSecret);
        index++;
    }
    else {
        contacts[oldest] = Contacts(index, firstname, lastname, nickname, phoneNumber, darkestSecret);
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
        std::cout << std::setw(10) << std::right << i   << "|"
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
			std::cout << "First name: " << this->contacts[i].getFirstName() << std:: endl;
			std::cout << "Last name: " << this->contacts[i].getLastName() << std:: endl;
			std::cout << "Nick name: " << this->contacts[i].getNickName() << std:: endl;
			std::cout<< "Phone number: " << this->contacts[i].getPhoneNumber() << std::endl;
			break;
		}
	}
}

int Phonebook::get_Index()
{
	return index;
}
