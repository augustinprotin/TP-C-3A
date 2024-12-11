//
// Created by augus on 11/12/2024.
//

#ifndef CLIENT_H
#define CLIENT_H
#include <string>


class Client {
    private:
        int _id;
        std::string _surname;
        std::string _name;
    public:
        Client();
        Client(int id, std::string name, std::string surname);
        int getId();
        std::string getSurname();
        std::string getName();
        std::string toString();
};



#endif //CLIENT_H
