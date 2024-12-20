//
// Created by augus on 11/12/2024.
//

#include "reservation.h"
#include "hotel.cpp"

#include <algorithm>
Reservation::Reservation() : _client(0, "", ""),
      _date(0, 0, 0),
      _hotel("","","",0),
      _room(0, probleme, 0.0),
      _nights(0),
      _price(0) {}
Reservation::Reservation(Hotel hotel, Chambre room, Client client, Date date, int nights, int price)
      : _hotel(hotel),_room(room),_client(client),_date(date),_nights(nights),_price(price) {};

bool Reservation::valid_room() {

      bool okay=false;
      for(Chambre i: _hotel.getResa()) {
            if (i.getNumeros()==_room.getNumeros()){
                  return true;
            }
      }
}

bool Reservation::free_room() {

}


int Reservation::get_nights() {
      return _nights;
}

std::string Reservation::to_string() {
      return "Reservation pour M/Mme " + _client.toString() + "\n" +
           "A partir du : " + _date.toString() + "\n" +
           "Pour une duree de : " + std::to_string(_nights) + " nuits\n" +
           "Dans l'Hotel : " + _hotel.toString() + "\n" +
           "dans la Chambre : " + _room.toString() + "\n" +
           "et pour un prix total de : " + std::to_string(_room.getPrix()*_nights) + "\n";
}

Hotel Reservation::get_hotel() {
      return _hotel;
}




