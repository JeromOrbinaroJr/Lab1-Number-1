#pragma once
#include <string>

class Films {
public:
    //Constructor
    Films(const std::string& releaseDate, const std::string& filmTitle, const std::string& roleActor);

    //Getters
    std::string getReleaseDate() const;//const ref
    std::string getFilmTitle() const;
    std::string getRoleActor() const;

    //Setters
    void setReleaseDate(const std::string& releaseDate);
    void setFilmTitle(const std::string& filmTitle);
    void setRoleActor(const std::string& roleActor);

private:
    std::string m_releaseDate;
    std::string m_filmTitle;
    std::string m_roleActor;
};