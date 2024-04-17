#pragma once
#include <list>
#include <vector>
#include <string>
#include "StarActor.h"

std::list<StarActor> findActorsByRole(const std::vector<StarActor>& actors, std::string& role);