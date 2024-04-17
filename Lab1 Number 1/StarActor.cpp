#include "StarActor.h"

StarActor::StarActor(const std::string& lastName, const std::string& firstName, const std::string& patronymic, const std::string& gender, const std::string& citizenship, const std::string& country) :
    m_lastName(lastName), m_firstName(firstName), m_patronymic(patronymic), m_gender(gender), m_citizenship(citizenship), m_country(country) {}

std::string StarActor::getLastName() const { return m_lastName; }
std::string StarActor::getFirstName() const { return m_firstName; }
std::string StarActor::getPatronymic() const { return m_patronymic; }
std::string StarActor::getGender() const { return m_gender; }
std::string StarActor::getCitizenship() const { return m_citizenship; }
std::string StarActor::getCountry() const { return m_country; }
const std::vector<Films>& StarActor::getFilmsParticipated() const { return m_filmsParticipated; }

void StarActor::setLastName(const std::string& lastName) { this->m_lastName = lastName; }
void StarActor::setFirstName(const std::string& firstName) { this->m_firstName = firstName; }
void StarActor::setPatronymic(const std::string& patronymic) { this->m_patronymic = patronymic; }
void StarActor::setGender(const std::string& gender) { this->m_gender = gender; }
void StarActor::setCitizenship(const std::string& citizenship) { this->m_citizenship = citizenship; }
void StarActor::setCountry(const std::string& country) { this->m_country = country; }
std::vector<Films>& StarActor::getFilmsParticipated() { return m_filmsParticipated; }
void StarActor::addFilmParticipated(const Films& film) { m_filmsParticipated.push_back(film); }
