#include "DataLoader.h"

void loadData(std::vector<StarActor>& actors, std::vector<Films>& films) {
    StarActor actor1("Doe", "John", "Smith", "man", "USA", "USA");
    Films film1_1("01.01.2020", "B_Eternal Echoes", "Taxi driver");
    Films film2_1("02.02.2021", "E_Midnight Mirage", "Leon");
    actor1.addFilmParticipated(film1_1);
    actor1.addFilmParticipated(film2_1);
    films.push_back(film1_1);
    films.push_back(film2_1);
    actors.push_back(actor1);

    StarActor actor2("Johnson", "Jane", "Doe", "woman", "UK", "UK");
    Films film1_2("03.03.2022", "C_Whispering Shadows", "Leon");
    Films film2_2("04.04.2023", "F_Frozen Dreams", "Cook");
    actor2.addFilmParticipated(film1_2);
    actor2.addFilmParticipated(film2_2);
    films.push_back(film1_2);
    films.push_back(film2_2);
    actors.push_back(actor2);

    StarActor actor3("Smith", "Michael", "Johnson", "man", "Canada", "Canada");
    Films film1_3("05.05.2024", "A_Frozen Dreams", "Driver");
    Films film2_3("06.06.2025", "D_Silent Ser", "Engineer");
    actor3.addFilmParticipated(film1_3);
    actor3.addFilmParticipated(film2_3);
    films.push_back(film1_3);
    films.push_back(film2_3);
    actors.push_back(actor3);
}
