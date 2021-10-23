#ifndef ACS_TFW_SAVENKO_RIDDLE_H
#define ACS_TFW_SAVENKO_RIDDLE_H
#include <string.h>
#include "Wisdom.h"

// Класс Загадка.
class Riddle: public Wisdom {
public:
    // Ответ на загадку.
    char* answer;
    // Метод вывода контента для дальнейшей реализации ООП-подхода.
    char* ReturnTheContent() override;
    // Метод вывода собственного содержимого для дальнейшей реализации ООП-подхода.
    char* ReturnTheOwnField() override;
};
#endif //ACS_TFW_SAVENKO_RIDDLE_H
