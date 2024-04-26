#pragma once
#include <vector>
#include <list>
#include <set>
#include "Films.h"
#include "StarActor.h"

struct DataLoader {
public:
    void loadData(std::vector<StarActor>& actors, std::vector<Films>& films);
    void ShellSort(std::vector<Films>& films);
    std::list<StarActor> findActorsByRole(const std::vector<StarActor>& actors, std::string& role);

private:
    std::vector<StarActor> m_actors;
    std::vector<Films> m_films;
};

