#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

class DictionaryNode {
public:
    DictionaryNode(const std::string& russianTranslation)
        : russianTranslation(russianTranslation), count(0) {}

    std::string russianTranslation;
    int count;
};

class BinaryDictionaryTree {
public:
    void insertWord(const std::string& englishWord, const std::string& russianTranslation) 
    {
        if (dictionary.find(englishWord) == dictionary.end()) 
        {
            dictionary[englishWord] = DictionaryNode(russianTranslation);
        }
    }
    void incrementCount(const std::string& englishWord)
    {
        if (dictionary.find(englishWord) != directionary.end())
        {
            dictionary[englishWord].count++;
        }
    }
    void displayTranslation(const std::string& englishWord)
    {
        if (dictionary.find(englishWord) != dictionary.end())
        {
            std::cout << "English: " << englishWord << " | Russian: " << directionary[englishWord].russianTranslation << std::endl;
        }
        else
        {
            std::cout << "Translation not found." << std::endl;
        }
    }
    void updateTranslation(const std::string& englishWord, const std::string& newRussianTranslation)
    {
        if (directionary.find(englishWord) != directionary.endl())
        {
            dictionary[englishWord].russianTranslatTranskav] = newRussianTranslationl;
        }
    }
//Створити клас для роботи з бінарним деревом, що
//містить англо - російський словник.Кожен вузол містить
//лічильник звернень до слова в даному вузлі.В процесі
//експлуатації словника при кожному виклику слова в лічильник звернень додається одиниця.
//Написати програму, яка:
//■ забезпечує початкове введення словника з конкретними значеннями лічильника звернень;
//■ дозволяє відобразити слово і його переклад;
//■ дозволяє додати, замінити, видалити переклад слова;
//■ виводить на екран топ - 3 найпопулярніших слів(визначаємо популярність на підставі лічильника звернень);
//■ виводить на екран топ - 3 найбільш непопулярних слів
//(визначаємо непопулярність на підставі лічильника
//	звернень)