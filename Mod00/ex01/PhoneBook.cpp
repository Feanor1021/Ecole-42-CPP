/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:56:21 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/05 17:41:00 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0), index(0)
{
}

PhoneBook::~PhoneBook()
{
}

Contact PhoneBook::getContact(int index) const
{
    return (this->contacts[index]);
}

int PhoneBook::getCount() const
{
    return (this->count);
}

void PhoneBook::addContact(Contact contact)
{
    this->contacts[this->index] = contact;
    this->count = (this->count < 8) ? this->count + 1 : this->count;
    this->index = (this->index + 1) % 8;
    return;
}
