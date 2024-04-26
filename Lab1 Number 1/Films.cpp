#include <vector>
#include "Films.h"

Films::Films(const std::string& releaseDate, const std::string& filmTitle, const std::string& roleActor):
	m_releaseDate(releaseDate), m_filmTitle(filmTitle), m_roleActor(roleActor) {}

std::string Films::getReleaseDate() const { return m_releaseDate; }
std::string Films::getFilmTitle() const { return m_filmTitle; }
std::string Films::getRoleActor() const { return m_roleActor; }

void Films::setReleaseDate(const std::string& releaseDate) { m_releaseDate = releaseDate; }
void Films::setFilmTitle(const std::string& filmTitle) { this->m_filmTitle = filmTitle; }
void Films::setRoleActor(const std::string& roleActor) { this->m_roleActor = roleActor; }

