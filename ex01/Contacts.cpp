/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabbas <moabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:25:48 by moabbas           #+#    #+#             */
/*   Updated: 2024/09/11 21:01:21 by moabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts() : index(0), firstname(""), lastname(""), nickname("") {}

Contacts::Contacts(int idx, std::string fname, std::string lname, std::string nname) {
    index = idx;
    firstname = fname;
    lastname = lname;
    nickname = nname;
}

int Contacts::getIndex() {
    return index;
}

std::string Contacts::getFirstName() {
    return firstname;
}

std::string Contacts::getLastName() {
    return lastname;
}

std::string Contacts::getNickName() {
    return nickname;
}


void Contacts::setIndex(int index) {
    this->index = index;
}

void Contacts::setFirstName(std::string firstname) {
    this->firstname = firstname;
}

void Contacts::setLastName(std::string lastname) {
    this->lastname = lastname;
}

void Contacts::setNickName(std::string nickname) {
    this->nickname = nickname;
}
