/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabbas <moabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:38:18 by moabbas           #+#    #+#             */
/*   Updated: 2024/09/11 21:00:25 by moabbas          ###   ########.fr       */
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

    public:
        Contacts();
        Contacts(int idx, std::string fname, std::string lname, std::string nname);

        int getIndex();
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        void setIndex(int index);
        void setFirstName(std::string firstname);
        void setLastName(std::string lastname);
        void setNickName(std::string nickname);
};

#endif