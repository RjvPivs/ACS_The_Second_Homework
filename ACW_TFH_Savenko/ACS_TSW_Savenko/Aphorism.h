#ifndef ACS_TFW_SAVENKO_APHORISM_H
#define ACS_TFW_SAVENKO_APHORISM_H
#include <string.h>
#include "Wisdom.h"

// Класс Афоризма.
class Aphorism: public Wisdom {
public:
    // Автор афоризма.
    char* author;
    // Метод вывода контента для дальнейшей реализации ООП-подхода.
    char* ReturnTheContent() override;
    // Метод вывода собственного содержимого для дальнейшей реализации ООП-подхода.
    char* ReturnTheOwnField() override;
};
#endif //ACS_TFW_SAVENKO_APHORISM_H
