#include <cstdio>
//
// Created by bapti on 11/12/2024.
//
#include <iostream>

#include "chambre.h"
#include "reservation.h"
#include "date.h"
#include "client.h"
#include "hotel.h"

int main() {
    std::cout<<("Hello World\n");
    Date new_date(2024,10,03);
    std::cout<<new_date.toString()<<"\n";
    Client augustin(1,"Protin","Augustin");
    std::cout<<augustin.getName()<<"\n";
    std::cout<<augustin.toString()<<"\n";
    Hotel prout("1","prout","Paris",3);
    std::cout<<prout.toString()<<"\n";
    Chambre room1(1,simple,30.0);
    std::cout<<room1.toString()<<"\n";
    Reservation new_res(prout,room1,augustin,new_date,20);
    std::cout<<new_res.to_string()<<"\n";

}