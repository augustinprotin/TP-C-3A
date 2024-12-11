//
// Created by augus on 11/12/2024.
//

#include "client.h"

Client::Client() : _id(0), _surname(""), _name("") {}
Client::Client(int id, std::string surname, std::string name)
    : _id(id), _surname(surname), _name(name) {}

int Client::getId() {
    return _id;
}
std::string Client::getSurname() {
    return _surname;
}
std::string Client::getName() {
    return _name;
}

std::string Client::toString() {
    return "Id client : " + std::to_string(_id) + "\n" +
        "Nom client : " + std::string(_surname) + "\n" +
        "Prenom client : " + std::string(_name) + "\n";
}



