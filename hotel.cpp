//
// Created by augus on 11/12/2024.
//

#include "chambre.h"
#include "hotel.h"
#include <iostream>
#include <vector>
Hotel::Hotel() :
    _id ( "aucun"),
    _name ("aucun"),
    _city ("aucun;"),
    _size (0) {}


Hotel::Hotel(std::string id, std::string name,std::string city, int size) :
    _id (id),
    _name  (name),
    _city  (city),
    _size  (size)
{}

    std::string Hotel::getId() {
        return _id;
    }

    std::string Hotel::getName() {
        return _name;
    }

    std::string Hotel::getCity() {
        return _city;
    }

    int Hotel::getSize() {
        return _size;
    }

    std::vector<Chambre> Hotel::getResa() {
        return _rooms;
    }

    int Hotel::creationChambre(Chambre chambreAAjouter) {
        _rooms.push_back(chambreAAjouter);
    }