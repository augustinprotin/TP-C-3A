//
// Created by augus on 11/12/2024.
//

#include "reservation.h"
Reservation::Reservation() : _client(0, "", ""),
      _date(0, 0, 0),
      _hotel("","","",0),
      _chambre(0, "Default Type", 0.0) {}
Reservation::Reservation(Hotel hotel, Chambre room, Client client, Date date, int nights, int price)
      : _hotel(hotel),_room(room),_client(client),_date(date),_nights(nights),_price(price) {};
bool Reservation::valid_room() {
      if
}

bool Reservation::free_room() {

}

std::string Reservation::to_string() {

}




