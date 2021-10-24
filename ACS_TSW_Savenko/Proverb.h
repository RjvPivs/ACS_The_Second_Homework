#ifndef ACS_TFW_SAVENKO_PROVERB_H
#define ACS_TFW_SAVENKO_PROVERB_H
#include <string.h>
#include "Wisdom.h"

// Класс Поговорка.
class Proverb:public Wisdom {
public:
    // Страна происхождения загадки.
    char* origin_country;
    // Метод вывода контента для дальнейшей реализации ООП-подхода.
    char* ReturnTheContent() override;
    // Метод вывода собственного содержимого для дальнейшей реализации ООП-подхода.
    char* ReturnTheOwnField() override;
};
#endif //ACS_TFW_SAVENKO_PROVERB_H
