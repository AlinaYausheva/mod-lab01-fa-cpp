// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
    int num = 0;
    bool word = false;
    bool rightWord = true;
    while (*str) {
        if (*str != ' ' && word == false) {
            word = true;
        } else if (*str == ' ' && word == true) {
            word = false;
            if (rightWord == true) {
                num++;
            } else {
                rightWord = true;
            }
        }
        if (*str >= '0' && *str <= '9' && word == true) {
            rightWord = false;
        }
        ++str;
    }
    if (word == true && rightWord == true) {
        num++;
    }
    return num;
}

unsigned int faStr2(const char *str) {
    int num = 0;
    bool word = false;
    bool rightWord = true;
    while (*str) {
        if (*str != ' ' && word == false) {
            word = true;
            if (*str < 'A' || *str > 'Z')
                rightWord = false;
        }
        else if (*str == ' ' && word == true) {
            word = false;
            if (rightWord == true) {
                num++;
            } else rightWord = true;
        }
        else if ((*str < 'a' || *str > 'z') && word == true) {
            rightWord = false;
        }
        ++str;
    }
    if (word == true && rightWord == true) {
        num++;
    }
    return num;
}

unsigned int faStr3(const char *str) {
    return 0;
}
