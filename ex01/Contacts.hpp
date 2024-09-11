/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabbas <moabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:38:18 by moabbas           #+#    #+#             */
/*   Updated: 2024/09/11 22:06:10 by moabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_H
# define CONTACTS_H

#include <iostream>
#include <string>

class Contacts {
    private:
        int index;
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        Contacts();
        Contacts(int idx, std::string fname, std::string lname, std::string nname, std::string phone, std::string secret);

        int getIndex();
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
        
        void setIndex(int index);
        void setFirstName(std::string firstname);
        void setLastName(std::string lastname);
        void setNickName(std::string nickname);
        void setPhoneNumber(std::string phoneNumber);
        void setDarkestSecret(std::string darkestSecret);
};

#endif
