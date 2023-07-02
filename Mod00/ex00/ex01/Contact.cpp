/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:56:03 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/05 17:40:47 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::getField(int index)
{
    if (index == 0)
        return (this->first_name);
    else if (index == 1)
        return (this->last_name);
    else if (index == 2)
        return (this->nickname);
    else if (index == 3)
        return (this->phone_number);
    else if (index == 4)
        return (this->darkest_secret);
    return "";
}

Contact Contact::setField(std::string fields[5])
{
    this->first_name = fields[0];
    this->last_name = fields[1];
    this->nickname = fields[2];
    this->phone_number = fields[3];
    this->darkest_secret = fields[4];
    return (*this);
}
