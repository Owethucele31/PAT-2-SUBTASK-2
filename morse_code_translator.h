#ifndef MORSE_CODE_TRANSLATOR_H
#define MORSE_CODE_TRANSLATOR_H

#include <string>
#include "morse_code_map.h"

std::string translateToMorseCode(const std::string& input) {
    std::string morseCode;
    for (char c : input) {
        if (c >= 'a' && c <= 'z') c -= 32; // Convert to uppercase
        if (morseCodeMap.find(c) != morseCodeMap.end()) {
            morseCode += morseCodeMap[c] + " ";
        } else if (c == ' ') {
            morseCode += "/ "; // Space separator
        }
    }
    return morseCode;
}

#endif // MORSE_CODE_TRANSLATOR_H
