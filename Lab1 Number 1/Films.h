#pragma once
#include <string>

class Films {
private:
    std::string m_releaseDate;
    std::string m_filmTitle;
    std::string m_roleActor;
public:
    //Constructor
    Films(const std::string& releaseDate, const std::string& filmTitle, const std::string& roleActor) :
        m_releaseDate(releaseDate), m_filmTitle(filmTitle), m_roleActor(roleActor) {}

    //Getters
    std::string getReleaseDate() const { return m_releaseDate; }
    std::string getFilmTitle() const { return m_filmTitle; }
    std::string getRoleActor() const { return m_roleActor; }

    //Setters
    std::string setReleaseDate(const std::string& releaseDate) { this->m_releaseDate = releaseDate; }
    std::string setFilmTitle(const std::string& filmTitle) { this->m_filmTitle = filmTitle; }
    std::string setRoleActor(const std::string& roleActor) { this->m_roleActor = roleActor; }
};