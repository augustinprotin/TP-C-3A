//
// Created by augus on 11/12/2024.
//

#ifndef HOTEL_H
#define HOTEL_H


//
// Created by augus on 11/12/2024.
//

#include "chambre.h"
#include "hotel.h"
#include <iostream>
#include <vector>
class Hotel {
    ;

private:
    std::string _id;
    std::string _name;
    std::string _city;
    std::vector<Chambre> _rooms;
    int _size;

public:
    Hotel() ;


    Hotel(std::string id, std::string name,std::string city, int size) ;


    std::string getId() ;


    std::string getName() ;


    std::string getCity() ;

    int getSize() ;

    std::vector<Chambre> getResa() ;

    void creationChambre(Chambre chambreAAjouter) ;
    std::string Hotel::toString();
};


#endif //HOTEL_H
