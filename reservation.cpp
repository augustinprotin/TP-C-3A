//
// Created by augus on 11/12/2024.
//

#include "reservation.h"
Reservation::Reservation() : _client(0, "", ""),
      _date(0, 0, 0),
      _hotel("","","",0),
      _room(0, probleme, 0.0) {}
Reservation::Reservation(Hotel hotel, Chambre room, Client client, Date date, int nights, int price)
      : _hotel(hotel),_room(room),_client(client),_date(date),_nights(nights),_price(price) {};
bool Reservation::valid_room() {

}

bool Reservation::free_room() {

}

std::string Reservation::to_string() {
      return "Réservation pour M/Mme " + _client.toString() + "\n" +
           "A partir du : " + _date.toString() + "\n" +
           "Pour une durée de : " + _nights + " nuits\n" +
           "Dans l'Hôtel : " + _hotel.toString() + "\n" +
           "Et dans la Chambre : " + _chambre.toString();
}




