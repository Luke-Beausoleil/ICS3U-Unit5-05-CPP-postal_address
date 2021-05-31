// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program formats inputted information into mialing address label

#include <iostream>
#include <string>
#include <cstring>
#include <locale>

std::string StrtAddress(std::string streetNumber, std::string streetName,
                    std::string apartmentNumber = "") {
    // this function returns the address

    // variables
    std::string address;
    std::string addressUpper;

    address = streetNumber + " " + streetName;
    if apartmentNumber.size() != ) {
        address = apartmentNumber = "-" + address;
    }
    int addressLength = address.length();

    // declaring character array
    char char_array[addressLength + 1];
    strcpy(char_array, address.c_str());

    for (int counter = 0; counter < addressLength; counter++) {
        nameUpper += std::toupper(char_array[counter],loc);

    return addressUpper;
}

main() {
    // this function receives input and calls another function

    // variables
    std::string name;
    std::string question;
    std::string apartmentNumber;
    std::string streetNumber;
    std::string streetName;
    std::string city;
    std::string province;
    std::string postalCode;
    std::locale loc;
    std::string questionUpper = "";
    std::string nameUpper = "";
    std::string address;

    // input
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Do you live in an apartment (y/n)?: ";
    std::cin >> question;

    int questionLength = question.length();

    // declaring character array
    char char_array[questionLength + 1];
    strcpy(char_array, question.c_str());

    for (int counter = 0; counter < questionLength; counter++) {
        questionUpper += std::toupper(char_array[counter],loc);
    }

    // input (continued)
    if questionUpper == "Y" || questionUpper == "YES" {
        std::cout << "Enter your apartment number: ";
        std::cin >> apartmentNumber;
    }
    std::cout << "Enter your street number: ";
    std::cin >> streetNumber;
    std::cout << "Enter your street name: ";
    std::cin >> streetName;
    std::cout << "Enter your city: ";
    std::cin >> city;
    std::cout << "Enter your province (abbreviation): ";
    std::cin >> province;
    std::cout << "Enter your postal code: ";
    std::cin >> postalCode;

    // output
    std::cout << "" << std::endl;

    // NAME output
    int nameLength = name.length();

    // declaring character array
    char char_array[nameLength + 1];
    strcpy(char_array, name.c_str());

    for (int counter = 0; counter < nameLength; counter++) {
        nameUpper += std::toupper(char_array[counter],loc);
    }

    // ADDRESS output & call function
    if questionUpper == "Y" || questionUpper == "YES" {
        address = StrtAddress(streetNumber, streetName, apartmentNumber)
    } else {
        address = StrtAddress(streetNumber, streetName)
    }
    std::cout << address << std::endl;

    // 
}
