#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Films.h"
#include "StarActor.h"
#include "DataLoader.h"

int main() {
    std::vector<StarActor> actors;
    std::vector<Films> films;
    std::string role;
    DataLoader dataLoader;

    dataLoader.loadData(actors, films);
    dataLoader.ShellSort(films);

    std::cout << "Sorted films:\n";
    for (const auto& film : films) {
        std::cout << "Title: " << film.getFilmTitle() << ", Date release: " << film.getReleaseDate() << ", Role actor: " << film.getRoleActor() << "\n";
    }

    std::cout << "\nEnter the role for which you want to create a list of actors: ";
    std::getline(std::cin, role);
    try {
        if (role.empty()) { throw role; }
        std::list<StarActor> actorsList = dataLoader.findActorsByRole(actors, role);
        try {
            if (actorsList.empty()) { throw actorsList; }
            std::cout << "Actors for role '" << role << "':\n";
            for (const auto& actor : actorsList) {
            std::cout << actor.getFirstName() << " " << actor.getLastName() << "\n";
            }
        } catch (std::list<StarActor>& actorsList) {
            std::cout << "No actors found for role '" << role << "'.\n";
        }
    } catch (const std::string& role) {
        std::cout << "Didn't fill in the role" << std::endl;
        return 0;
    }
    return 0;
}