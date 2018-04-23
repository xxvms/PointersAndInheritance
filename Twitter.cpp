//
// Created by xxvms on 08/04/18.
//

#include <iostream>
#include "Twitter.h"

Twitter::Twitter(std::string first, std::string last, int arbitrary, std::string handle): Person(std::move(first), std::move(last), arbitrary), TwitterHandle(std::move(handle)){
    std::cout << "Constructing Twitter " <<  TwitterHandle << '\n';
}


//Twitter::~Twitter()  {
//    std::cout << "Destructing Twitter " <<  TwitterHandle << '\n';
//}

std::string Twitter::getName() const {
    return Person::getName() + " " + TwitterHandle;

    // this is used instead of changes in Person.h to protected from private for firstname and lastname

    // return firstName + " " + lastName;  at least we are not damaging encapsulation of our person class.

    // protected keyword Kate wants to treat as TODO something that needs to be fixed! rather then completed solution
}