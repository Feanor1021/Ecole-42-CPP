/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:56:24 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/05 17:41:05 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int count;
    size_t index;

public:
    PhoneBook();
    ~PhoneBook();
    Contact getContact(int index) const;
    int getCount() const;
    void addContact(Contact contact);
};

#endif
