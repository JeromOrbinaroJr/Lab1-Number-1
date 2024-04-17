#include <list>
#include <vector>
#include <string>
#include "StarActor.h"

std::list<StarActor> findActorsByRole(const std::vector<StarActor>& actors, std::string& role) {
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