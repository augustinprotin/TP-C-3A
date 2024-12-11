//
// Created by augus on 11/12/2024.

#include <iostream>
#include "chambre.h"


int Chambre::getNumeros () {
    return numeros;
}

format Chambre::getFormat () {
    return format_chambre;
}
double Chambre::getPrix () {
    return prix;
};

Chambre::Chambre():
    numeros(-1),
    format_chambre(format::simple),
    prix (0.0)
{}

Chambre::Chambre(int num, format format_chambre, double prix_par_nuit):
    numeros(num),
    format_chambre(format_chambre),
    prix (prix_par_nuit)
{}

double Chambre::editPrice(double newValue) {
    prix = newValue;
    return newValue;
}