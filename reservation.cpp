//
// Created by augus on 11/12/2024.
//

#include "reservation.h"


#include <algorithm>
Reservation::Reservation() : _client(0, "", ""),
      _date(0, 0, 0),
      _hotel("","","",0),
      _room(0, probleme, 0.0) {}
Reservation::Reservation(Hotel hotel, Chambre room, Client client, Date date, int nights, int price)
      : _hotel(hotel),_room(room),_client(client),_date(date),_nights(nights),_price(price) {};
bool Reservation::valid_room() {
      if (std::find(_hotel.getResa().begin(),_hotel.getResa().end(), _chambre) != _hotel.getResa()) {//fonction pour savoir si la chambre est dans la liste des chambres de l hotel
            return true;
      }
      return false;
}

bool Reservation::free_room() {

}

std::string Reservation::to_string() {
      return "Réservation pour M/Mme " + _client.toString() + "\n" +
           "A partir du : " + _date.toString() + "\n" +
           "Pour une durée de : " + std::to_string(_nights) + " nuits\n" +
           "Dans l'Hôtel : " + _hotel.toString() + "\n" +
           "Et dans la Chambre : " + _room.toString();
}

Hotel Reservation::get_hotel() {
      return _hotel;
}




