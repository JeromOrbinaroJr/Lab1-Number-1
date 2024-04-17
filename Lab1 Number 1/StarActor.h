#pragma once
#include <string>
#include <vector>
#include "Films.h"

class StarActor {
private:
    std::string m_lastName;
    std::string m_firstName;
    std::string m_patronymic;
    std::string m_gender;
    std::string m_citizenship;
    std::string m_country;
    std::vector<Films> m_filmsParticipated;

public:
    StarActor(const std::string& lastName, const std::string& firstName, const std::string& patronymic, const std::string& gender, const std::string& citizenship, const std::string& country);

    // Getters
    std::string getLastName() const;
    std::string getFirstName() const;
    std::string getPatronymic() const;
    std::string getGender() const;
    std::string getCitizenship() const;
    std::string getCountry() const;
    const std::vector<Films>& getFilmsParticipated() const;

    // Setters
    void setLastName(const std::string& lastName);
    void setFirstName(const std::string& firstName);
    void setPatronymic(const std::string& patronymic);
    void setGender(const std::string& gender);
    void setCitizenship(const std::string& citizenship);
    void setCountry(const std::string& country);
    std::vector<Films>& getFilmsParticipated();
    void addFilmParticipated(const Films& film);
};
