#pragma once
#include <iostream>
#include <string.h>
#include <vector>
#include <stdlib.h>
#define LIMIT 255

using std::string;
using std::cout;
using std::cin;
using std::vector;

// ПРОВЕРКА НА ДУРАКА

namespace FC {
    
    //                NUMBERS
    
    //                                                  INTEGER

    //@return void
    //@param EnMs String. Входное сообщение. Например: "Введите число: "
    //@param ErMs String. Сообщение обшибке. Например: "Невернный ввод!". Можно пропустить.
    //@param Val Int. Значение, в которое записывается корректный ввод.
    void IsAInt(string EnMs, string ErMs, int &Val) {
        string Enter;
        bool IsCorrect = false;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    if(Enter[i] < '0' || Enter[i] > '9') {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = std::stoi(Enter);
                else cout << ErMs << "\n";
            } else cout << ErMs << "\n";
        }while(!IsCorrect);
    }
    void IsAInt(string EnMs, int &Val) {
        string Enter;
        bool IsCorrect = false;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    if(Enter[i] < '0' || Enter[i] > '9') {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = std::stoi(Enter);
                else cout << "Invalid enter! \n";
            } else cout << "Invalid enter! \n";
        }while(!IsCorrect);
    }
    //                                                      FLOAT

    //@return void
    //@param EnMs String. Входное сообщение. Например: "Введите число: "
    //@param ErMs String. Сообщение обшибке. Например: "Невернный ввод!". Можно пропустить.
    //@param Val Float/Double. Значение, в которое записывается корректный ввод.
    void IsAFloat(string EnMs, string ErMs, float &Val) {
        string Enter;
        bool IsCorrect = false;
        int DotCount = 0;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    if(Enter[i] == '.'){
                        if(i == 0)
                        IsCorrect = false;
                        else if(i == Enter.length()-1)
                        IsCorrect = false;
                        DotCount++;
                        if(DotCount > 1)
                        IsCorrect = false;
                         
                    } else if(Enter[i] < '0' || Enter[i] > '9') {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = std::stof(Enter);
                else cout << ErMs << "\n";
            } else cout << ErMs << "\n";
        }while(!IsCorrect);
    }
    void IsAFloat(string EnMs, float &Val) {
        string Enter;
        bool IsCorrect = false;
        int DotCount = 0;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    if(Enter[i] == '.'){
                        if(i == 0)
                        IsCorrect = false;
                        else if(i == Enter.length()-1)
                        IsCorrect = false;
                        DotCount++;
                        if(DotCount > 1)
                        IsCorrect = false;
                         
                    } else if(Enter[i] < '0' || Enter[i] > '9') {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = std::stof(Enter);
                else cout << "Invalid enter!\n";
            } else cout << "Invalid enter!\n";
        }while(!IsCorrect);
    }
    void IsAFloat(string EnMs, string ErMs, double &Val) {
        string Enter;
        bool IsCorrect = false;
        int DotCount = 0;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    if(Enter[i] == '.'){
                        if(i == 0)
                        IsCorrect = false;
                        else if(i == Enter.length()-1)
                        IsCorrect = false;
                        DotCount++;
                        if(DotCount > 1)
                        IsCorrect = false;
                         
                    } else if(Enter[i] < '0' || Enter[i] > '9') {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = std::stod(Enter);
                else cout << ErMs << "\n";
            } else cout << ErMs << "\n";
        }while(!IsCorrect);
    }
    void IsAFloat(string EnMs, double &Val) {
        string Enter;
        bool IsCorrect = false;
        int DotCount = 0;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    if(Enter[i] == '.'){
                        if(i == 0)
                        IsCorrect = false;
                        else if(i == Enter.length()-1)
                        IsCorrect = false;
                        DotCount++;
                        if(DotCount > 1)
                        IsCorrect = false;
                         
                    } else if(Enter[i] < '0' || Enter[i] > '9') {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = std::stod(Enter);
                else cout << "Invalid enetr!\n";
            } else cout << "Invalid enetr!\n";
        }while(!IsCorrect);
    }

    //                            STRING
                                                                
    //                                                                  ALPHABET

    //@return void
    //@param EnMs String. Входное сообщение. Например: "Введите число: "
    //@param ErMs String. Сообщение обшибке. Например: "Невернный ввод!". Можно пропустить.
    //@param Val String. Значение, в которое записывается корректный ввод.
    void IsAAlphabetLeters(string EnMs, string ErMs, string &Val) {
        string Enter;
        bool IsCorrect = false;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    if((Enter[i] < 'A' || Enter[i] > 'Z') && (Enter[i] < 'a' || Enter[i] > 'z')) {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = Enter;
                else cout << ErMs << "\n";
            } else cout << ErMs << "\n";
        }while(!IsCorrect);
    }
    void IsAAlphabetLeters(string EnMs, string &Val) {
        string Enter;
        bool IsCorrect = false;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    if((Enter[i] < 'A' || Enter[i] > 'Z') && (Enter[i] < 'a' || Enter[i] > 'z')) {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = Enter;
                else cout << "Invalid enetr!\n";
            } else cout << "Invalid enetr!\n";
        }while(!IsCorrect);
    }
    // UPPERcase

    //@return void
    //@param EnMs String. Входное сообщение. Например: "Введите число: "
    //@param ErMs String. Сообщение обшибке. Например: "Невернный ввод!". Можно пропустить.
    //@param Val String. Значение, в которое записывается корректный ввод.
    void IsAUppercase(string EnMs, string ErMs, string &Val) {
        string Enter;
        bool IsCorrect = false;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    if(Enter[i] < 'A' || Enter[i] > 'Z') {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = Enter;
                else cout << ErMs << "\n";
            } else cout << ErMs << "\n";
        }while(!IsCorrect);
    }
    void IsAUppercase(string EnMs, string &Val) {
        string Enter;
        bool IsCorrect = false;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    if(Enter[i] < 'A' || Enter[i] > 'Z') {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = Enter;
                else cout << "Invalid enetr!\n";
            } else cout << "Invalid enetr!\n";
        }while(!IsCorrect);
    }
    // lowerCASE

    //@return void
    //@param EnMs String. Входное сообщение. Например: "Введите число: "
    //@param ErMs String. Сообщение обшибке. Например: "Невернный ввод!". Можно пропустить.
    //@param Val String. Значение, в которое записывается корректный ввод.
    void IsALowercase(string EnMs, string ErMs, string &Val) {
        string Enter;
        bool IsCorrect = false;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    if(Enter[i] < 'a' || Enter[i] > 'z') {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = Enter;
                else cout << ErMs << "\n";
            } else cout << ErMs << "\n";
        }while(!IsCorrect);
    }
    void IsALowercase(string EnMs, string &Val) {
        string Enter;
        bool IsCorrect = false;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    if(Enter[i] < 'a' || Enter[i] > 'z') {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = Enter;
                else cout << "Invalid enetr!\n";
            } else cout << "Invalid enetr!\n";
        }while(!IsCorrect);
    }
    //                                                                  NOT ALPHABET

    //@return void
    //@param EnMs String. Входное сообщение. Например: "Введите число: "
    //@param ErMs String. Сообщение обшибке. Например: "Невернный ввод!". Можно пропустить.
    //@param Val String. Значение, в которое записывается корректный ввод.
    void IsANotAlphabetLeters(string EnMs, string ErMs, string &Val) { 
        string Enter;
        bool IsCorrect = false;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length(); i++) {
                    if((Enter[i] >= 'A' && Enter[i] <= 'Z') || (Enter[i] >= 'a' && Enter[i] <= 'z')) {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = Enter;
                else cout << ErMs << "\n";
            } else cout << ErMs << "\n";
        }while(!IsCorrect);
    }
    void IsANotAlphabetLeters(string EnMs, string &Val) { 
        string Enter;
        bool IsCorrect = false;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length(); i++) {
                    if((Enter[i] >= 'A' && Enter[i] <= 'Z') || (Enter[i] >= 'a' && Enter[i] <= 'z')) {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = Enter;
                else cout << "Invalid enetr!\n";
            } else cout << "Invalid enetr!\n";
        }while(!IsCorrect);
    }
    //                                                               SPECIAL SYMBOLS

    //@return void
    //@param EnMs String. Входное сообщение. Например: "Введите число: "
    //@param ErMs String. Сообщение обшибке. Например: "Невернный ввод!". Можно пропустить.
    //@param Val String. Значение, в которое записывается корректный ввод.
    void IsASpecialSumbols(string EnMs, string ErMs, string &Val) {
        string Enter;
        bool IsCorrect = false;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length(); i++) {
                    if((Enter[i] >= 'A' && Enter[i] <= 'Z') || (Enter[i] >= 'a' && Enter[i] <= 'z') || (Enter[i] >= '0' && Enter[i] <= '9')) {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = Enter;
                else cout << ErMs << "\n";
            } else cout << ErMs << "\n";
        }while(!IsCorrect);
    }
    void IsASpecialSumbols(string EnMs, string &Val) { //
        string Enter;
        bool IsCorrect = false;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length(); i++) {
                    if((Enter[i] >= 'A' && Enter[i] <= 'Z') || (Enter[i] >= 'a' && Enter[i] <= 'z') || (Enter[i] >= '0' && Enter[i] <= '9')) {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = Enter;
                else cout << "Invalid enetr!\n";
            } else cout << "Invalid enetr!\n";
        }while(!IsCorrect);
    }
    //                                                                          MASK

    //@return void
    //@param EnMs String. Входное сообщение. Например: "Введите число: "
    //@param ErMs String. Сообщение обшибке. Например: "Невернный ввод!". Можно пропустить.
    //@param Mask String. Маска, с которой сравнивается ввод пользователя. Например: "АБВГ123"
    //@param Val String. Значение, в которое записывается корректный ввод.
    void IsAMaskSymbols(string EnMs, string ErMs, string Mask, string &Val) {
        string Enter;
        bool IsCorrect = false;
        int CT = 0;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    for(size_t j = 0; j < Mask.length(); j++) {
                        if(Enter[i] == Mask[j]){
                            CT++;
                        }
                    }
                    if(CT != 1) {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = Enter;
                else cout << ErMs << "\n";
            } else cout << ErMs << "\n";
        }while(!IsCorrect);
    }
    void IsAMaskSymbols(string EnMs, string Mask, string &Val) {
        string Enter;
        bool IsCorrect = false;
        int CT = 0;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    for(size_t j = 0; j < Mask.length(); j++) {
                        if(Enter[i] == Mask[j]){
                            CT++;
                        }
                    }
                    if(CT != 1) {
                        IsCorrect = false;
                    }
                    CT = 0;
                }
                if(IsCorrect)
                Val = Enter;
                else cout << "Invalid enetr!\n";
            } else cout << "Invalid enetr!\n";
        }while(!IsCorrect);
    }
    void IsAMaskSymbols(string EnMs, string Mask, string &Val, bool A) {
        string Enter;
        bool IsCorrect = false;
        int CT = 0;
        do {
            cout << EnMs;
            cin >> Enter;
            cin.clear();
            if(Enter.length() > 0) {
                IsCorrect = true;
                for(size_t i = 0; i < Enter.length() && IsCorrect; i++) {
                    for(size_t j = 0; j < Mask.length(); j++) {
                        if(Enter[i] == Mask[j]){
                            CT++;
                        }
                    }
                    if(CT < 1) {
                        IsCorrect = false;
                    }
                }
                if(IsCorrect)
                Val = Enter;
                else cout << "Invalid enetr!\n";
            } else cout << "Invalid enetr!\n";
        }while(!IsCorrect);
    }

} // namespace FoolCheck

// ГЕНЕРАТОРЫ

namespace Gen {
    // Генерирует имена по маске
    //@pram Alph String. Это маска по которой генерируются имена
    //@return String
    string NameGenMask(string Alphabet) {
        vector<int> CountSumbols(Alphabet.length());
        string result  = "";
        static string Lastreturn;
        static string LastAlphabet;
        int cursor = 0;
        if(Lastreturn == "" || LastAlphabet[0] != Alphabet[0]) {
            LastAlphabet = Alphabet;
            Lastreturn = Alphabet;
            return Alphabet;
        } else if(Lastreturn.length() < LIMIT-4) {
            for(int i = 0; i < Lastreturn.length(); i++) {
                for(int j = 0; j < Alphabet.length(); j++) {
                    if(Lastreturn[i] == Alphabet[j]) {
                        CountSumbols[j]++;
                        if(CountSumbols[j] > 1 && j > cursor) {
                            cursor = j;
                        }
                    }
                }
            }
            CountSumbols[cursor]++;
            for(int i = 0; i < Alphabet.length(); i++) {
                for(int j = 0; j < CountSumbols[i]; j++) {
                    result += Alphabet[i];
                }
            }
            Lastreturn = result;
            LastAlphabet = Alphabet;
            return result;
        } else {
            for(int i = 0; i < Lastreturn.length(); i++) {
                for(int j = 0; j < Alphabet.length(); j++) {
                    if(Lastreturn[i] == Alphabet[j]) {
                        CountSumbols[j]++;
                        if(CountSumbols[j] > 1 && j > cursor) {
                            cursor = j;
                        }
                    }
                }
            }
            if(cursor < Alphabet.length()-1) {
                CountSumbols[cursor] = 1;
                CountSumbols[cursor+1]++;
            } else {
                    LastAlphabet = Alphabet;
                    return NULL;
                }
            for(int i = 0; i < Alphabet.length(); i++) {
                for(int j = 0; j < CountSumbols[i]; j++) {
                    result += Alphabet[i];
                }
            }
            LastAlphabet = Alphabet;
            Lastreturn = result;
            return result;
        }
    }
    
    
} // namespace Generators
