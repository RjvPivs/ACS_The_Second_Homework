#ifndef ACS_TFW_SAVENKO_WISDOM_H
#define ACS_TFW_SAVENKO_WISDOM_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>

// Класс Кладезь мудрости.
class Wisdom {
public:
    // Содержимое кладезя.
    char* content;
    virtual char* ReturnTheContent();
    virtual char* ReturnTheOwnField();
};
#endif //ACS_TFW_SAVENKO_WISDOM_H
