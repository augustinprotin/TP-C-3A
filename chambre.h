//
// Created by augus on 11/12/2024.
//



#ifndef CHAMBRE_H
#define CHAMBRE_H

#include <string>
#include <vector>


enum format {
    probleme,
    simple,
    duo,
    triple,
    familliale,
    trois_viandes,
    jantes_alu_19_pouces
};


class Chambre {
private:
    int numeros;
    format format_chambre;
    double prix;

public:
    int getNumeros ();
    format getFormat ();
    double getPrix ();

    Chambre();
    Chambre(int num, format format_chambre, double prix_par_nuit);
    editPrice(double newValue);
};




#endif //CHAMBRE_H

