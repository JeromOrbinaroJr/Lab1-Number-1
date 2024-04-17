#include "SortedFilms.h"

void ShellSort(std::vector<Films>& films) {
    size_t n = films.size();
    for (int d = n / 2; d > 0; d /= 2) {
        for (int i = d; i < n; ++i) {
            Films temp = films[i];
            int j;
            for (j = i; j >= d && films[j - d].getFilmTitle() > temp.getFilmTitle(); j -= d) {
                films[j] = films[j - d];
            }
            films[j] = temp;
        }
    }
}
