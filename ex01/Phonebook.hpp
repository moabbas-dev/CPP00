/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabbas <moabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:02:38 by moabbas           #+#    #+#             */
/*   Updated: 2024/09/11 21:18:35 by moabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contacts.hpp"

class Phonebook {
	private:
		Contacts contacts[8];
		int oldest;
		int index;

	public:
		Phonebook();
		void addContact();
		void displayContacts();
		void search_by_id(int id);
		int get_Index();
	private:
		std::string formatString(std::string& str, size_t max_len) const;
};

#endif