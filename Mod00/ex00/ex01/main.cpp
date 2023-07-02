/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:56:10 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/05 19:19:18 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include "PhoneBook.hpp"

std::string truncate(std::string field)
{
    std::string str;

    str = field;
    if (str.length() > 10)
        str = str.substr(0, 9) + '.';
    return (str);
}

void display_only(PhoneBook pbook)
{
    int index;
    char c;
    std::string buf;
    std::stringstream ss;

    std::cout << "Input Index: [0-7]" << std::endl;
    std::cin >> buf;
    ss << buf;
    if ((ss >> index).fail() || ss.get(c) || !(index >= 0 && index < 8))
    {
        std::cout << "Out of Range Index or Not Int, Must be [0-7]" << std::endl;
        return display_only(pbook);
    }
    std::cout << "First name    : " << pbook.getContact(index).getField(0) << std::endl;
    std::cout << "Last name     : " << pbook.getContact(index).getField(1) << std::endl;
    std::cout << "Nick name     : " << pbook.getContact(index).getField(2) << std::endl;
    std::cout << "Phone number  : " << pbook.getContact(index).getField(3) << std::endl;
    std::cout << "Darkest secret: " << pbook.getContact(index).getField(4) << std::endl;
}

int main()
{
    PhoneBook PhoneBookInstance;
    Contact ContactInstance;

    std::string cmd;
    std::string fields[5];
    const char *names[6] = {"index", "first name", "last name", "nickname", "phone number", "darkest secret"};

    while (1)
    {
        std::cout << "Input a Command: [ADD, SEARCH, EXIT]" << std::endl;
        std::cin >> cmd;

        if (cmd == "ADD")
        {
            for (size_t i = 0; i < 5; i++)
            {
                std::cout << "Input " << names[i + 1] << ":" << std::endl;
                std::cin >> fields[i];
            }
            PhoneBookInstance.addContact(ContactInstance.setField(fields));
        }
        else if (cmd == "SEARCH")
        {
            for (size_t i = 0; i < 4; i++)
            {
                std::cout << " | " << std::right << std::setw(10) << names[i];
            }
            std::cout << " | " << std::endl;
            for (int i = 0; i < PhoneBookInstance.getCount(); i++)
            {
                std::cout << " | " << std::right << std::setw(10) << i;
                std::cout << " | " << std::right << std::setw(10) << truncate(PhoneBookInstance.getContact(i).getField(0));
                std::cout << " | " << std::right << std::setw(10) << truncate(PhoneBookInstance.getContact(i).getField(1));
                std::cout << " | " << std::right << std::setw(10) << truncate(PhoneBookInstance.getContact(i).getField(2));
                std::cout << " | " << std::endl;
            }
            display_only(PhoneBookInstance);
        }
        else if (cmd == "EXIT")
        {
            std::exit(EXIT_SUCCESS);
        }
        else
        {
            std::cout << "Wrong Command!" << std::endl;
        }
    }
    return 0;
}
