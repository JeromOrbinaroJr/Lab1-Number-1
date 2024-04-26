#include "DataLoader.h"
#include <list>
#include <vector>

void DataLoader::loadData(std::vector<StarActor>& actors, std::vector<Films>& films) {
    StarActor actor1("Doe", "John", "Smith", "man", "USA", "USA");
    Films film1_1("01.01.2020", "D_Eternal Echoes", "Taxi driver");
    Films film2_1("02.02.2021", "A_Midnight Mirage", "Leon");
    actor1.addFilmParticipated(film1_1);
    actor1.addFilmParticipated(film2_1);
    actors.push_back(actor1);
    films.push_back(film1_1);
    films.push_back(film2_1);

    StarActor actor2("Johnson", "Jane", "Doe", "woman", "UK", "UK");
    Films film1_2("03.03.2022", "B_Whispering Shadows", "Leon");
    Films film2_2("04.04.2023", "F_Frozen Dreams", "Cook");
    actor2.addFilmParticipated(film1_2);
    actor2.addFilmParticipated(film2_2);
    actors.push_back(actor2);
    films.push_back(film1_2);
    films.push_back(film2_2);
    
    StarActor actor3("Smith", "Michael", "Johnson", "man", "Canada", "Canada");
    Films film1_3("05.05.2024", "C_Interpol", "Driver");
    Films film2_3("06.06.2025", "E_Silent Ser", "Engineer");
    actor3.addFilmParticipated(film1_3);
    actor3.addFilmParticipated(film2_3);
    actors.push_back(actor3);
    films.push_back(film1_3);
    films.push_back(film2_3);
}

void DataLoader::ShellSort(std::vector<Films>& films) {
    size_t n = films.size();
    for (int d = n / 2; d > 0; d /= 2) {
        for (int i = d; i < n; ++i) {
            Films temp = films[i];
            int j;
            for (j = i; j >= d && films[j - d].getFilmTitle() > temp.getFilmTitle(); j -= d) {
                films[j] = films[j - d];
            }
            films[j] = temp;
        }
    }
}

std::list<StarActor> DataLoader::findActorsByRole(const std::vector<StarActor>& actors, std::string& role) {
    for (char& roleLowCase : role) {
        roleLowCase = std::tolower(roleLowCase);
    }
    std::list<StarActor> actorsList;
    for (const auto& actor : actors) {
        for (const auto& film : actor.getFilmsParticipated()) {
            std::string roleActor = film.getRoleActor();
            for (char& roleLowCase : roleActor) {
                roleLowCase = std::tolower(roleLowCase);
            }
            if (roleActor == role) {
                actorsList.push_back(actor);
                break;
            }
        }
    }
    return actorsList;
}