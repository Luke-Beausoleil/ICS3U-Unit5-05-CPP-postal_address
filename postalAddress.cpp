// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program formats inputted information into mialing address label

#include <iostream>
#include <string>
#include <cstring>
#include <locale>

std::string StrtAddress(std::string firstName, std::string lastName,
                        std::string streetNumber, std::string streetName,
                        std::string city, std::string province,
                        std::string firstPostalCode,
                        std::string lastPostalCode,
                        std::string apartmentNumber = "") {
    // this function returns the address

    // variables
    std::string address;
    std::string addressUpper;
    std::locale loc;

    if (apartmentNumber.size() != 0) {
        address = firstName + " " + lastName + "\n" + apartmentNumber + "-"
                  + streetNumber + " " + streetName + "\n" + city + " " +
                  province + "  " + firstPostalCode + " " + lastPostalCode;
    } else {
        address = firstName + " " + lastName + "\n" + streetNumber + " " +
                  streetName + "\n" + city + " " + province + "  " +
                  firstPostalCode + " " + lastPostalCode;
    }

    // upper case
    int addressLength = address.length();

    // declaring character array
    char char_array[addressLength + 1];
    strcpy(char_array, address.c_str());

    for (int counter = 0; counter < addressLength; counter++) {
        addressUpper += std::toupper(char_array[counter], loc);
    }
    return addressUpper;
}

main() {
    // this function receives input and calls another function

    // variables
    std::string firstName;
    std::string lastName;
    std::string question;
    std::string apartmentNumber;
    std::string streetNumber;
    std::string streetName;
    std::string city;
    std::string province;
    std::string firstPostalCode;
    std::string lastPostalCode;
    std::locale loc;
    std::string questionUpper = "";
    std::string nameUpper = "";
    std::string address;

    // input
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;
    std::cout << "Do you live in an apartment (y/n)?: ";
    std::cin >> question;

    // upper case question to check response
    int questionLength = question.length();

    // declaring character array
    char char_array[questionLength + 1];
    strcpy(char_array, question.c_str());

    for (int counter = 0; counter < questionLength; counter++) {
        questionUpper += std::toupper(char_array[counter], loc);
    }

    // input (continued)
    if (questionUpper == "Y" || questionUpper == "YES") {
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
    std::cout << "Enter the first three digits of your postal code: ";
    std::cin >> firstPostalCode;
    std::cout << "Enter the last three digits of your postal code: ";
    std::cin >> lastPostalCode;

    // output & call function
    std::cout << "" << std::endl;
    if (questionUpper == "Y" || questionUpper == "YES") {
        address = StrtAddress(firstName, lastName, streetNumber, streetName,
                  city, province, firstPostalCode, lastPostalCode,
                  apartmentNumber);
    } else {
        address = StrtAddress(firstName, lastName, streetNumber, streetName,
                  city, province, firstPostalCode, lastPostalCode);
    }
    std::cout << address << std::endl;
}
