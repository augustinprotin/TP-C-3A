//
// Created by augus on 11/12/2024.
//

#ifndef RESERVATION_H
#define RESERVATION_H
#include "chambre.h"
#include "client.h"
#include "hotel.h"
#include "date.h"
#include <string>


class Reservation {
    private:
        Hotel _hotel;
        Chambre _room;
        Client _client;
        Date _date;
        int _nights;
        int _price;
    public:
        Reservation();
        Reservation(Hotel hotel, Chambre room, Client client,Date date,int nights,int price);
        bool valid_room();
        bool free_room();
        std::string to_string();
        Hotel get_hotel();




};



#endif //RESERVATION_H
