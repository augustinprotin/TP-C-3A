#include <cstdio>
//
// Created by bapti on 11/12/2024.
//
#include <iostream>

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


}