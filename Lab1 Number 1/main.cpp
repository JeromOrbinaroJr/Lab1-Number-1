#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <limits>
#include "Films.h"
#include "StarActor.h"
#include "SortedFilms.h"
#include "FindRole.h"
#include "DataLoader.h"

int main() {
    std::vector<StarActor> actors;
    std::vector<Films> films;

    loadData(actors, films);

    ShellSort(films);

    std::cout << "Sorted films:\n";
    for (const auto& film : films) {
        std::cout << "Title: " << film.getFilmTitle() << ", Date release: " << film.getReleaseDate() << ", Role actor: " << film.getRoleActor() << "\n";
    }

    std::string role;
    std::cout << "\nEnter the role for which you want to create a list of actors: ";
    std::getline(std::cin, role);
    
    if (!role.empty()) {
        std::list<StarActor> actorsList = findActorsByRole(actors, role);
        if (!actorsList.empty()) {
            std::cout << "Actors for role '" << role << "':\n";
            for (const auto& actor : actorsList) {
                std::cout << actor.getFirstName() << " " << actor.getLastName() << "\n";
            }
        }
        else {
            std::cout << "No actors found for role '" << role << "'.\n";
        }
    }
    return 0;
}