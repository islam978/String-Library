
//ProgrammingAdvices.com


#include <iostream>
#include "clsString.h"

using namespace std;


int main()

{
    clsString String1;


    clsString String2("Islam");

    String1.Value = "Islam Faraj";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    cout << "Number of words: " << String1.CountWords() << endl;

    cout << "Number of words: " << String1.CountWords("Islam mhd abd faraj") << endl;

    cout << "Number of words: " <<
        clsString::CountWords("Islam Mhd-Abd Faraj") << endl;

    //----------------
    clsString String3("hi how are you?");

    cout << "String 3 = " << String3.Value << endl;

    cout << "String Length = " << String3.Length() << endl;

    String3.UpperFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.LowerFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.UpperAllString();
    cout << String3.Value << endl;

    //----------------

    String3.LowerAllString();
    cout << String3.Value << endl;

    //----------------

    cout << "After inverting a : "
        << clsString::InvertLetterCase('a') << endl;

    //----------------

    String3.Value = "AbCdEfg";

    String3.InvertAllLettersCase();
    cout << String3.Value << endl;

    String3.InvertAllLettersCase();
    cout << String3.Value << endl;

    //----------------

    cout << "Capital Letters count : "
        << clsString::CountLetters("Islam Faraj", clsString::CapitalLetters)
        << endl << endl;

    //----------------

    String3.Value = "Welcome to Syria";
    cout << String3.Value << endl;

    cout << "Capital Letters count :" << String3.CountCapitalLetters() << endl;

    //----------------

    cout << "Small Letters count :" << String3.CountSmallLetters() << endl;

    //----------------

    cout << "vowels count :" << String3.CountVowels() << endl;

    //----------------

    cout << "letter E count :" << String3.CountSpecificLetter('E', false) << endl;

    //----------------

    cout << "is letter a vowel? " << clsString::IsVowel('a')
        << endl;

    //----------------

    cout << "Words Count" << String3.CountWords()
        << endl;

    //----------------


    vector<string> vString;

    vString = String3.Split(" ");

    cout << "\nTokens = " << vString.size() << endl;

    for (string& s : vString)
    {
        cout << s << endl;
    }

    //----------------

    //Tirms
    String3.Value = "    Islam Faraj     ";
    cout << "\nString     = " << String3.Value;

    String3.Value = "    Islam Faraj    ";
    String3.TrimLeft();
    cout << "\n\nTrim Left  = " << String3.Value;

    //----------------

    String3.Value = "    Islam Faraj     ";
    String3.TrimRight();
    cout << "\nTrim Right = " << String3.Value;

    //----------------

    String3.Value = "    Islam Faraj     ";
    String3.Trim();
    cout << "\nTrim       = " << String3.Value;

    //----------------

    //Joins
    vector<string> vString1 = { "Islam","Rahma","Salman","Khair" };

    cout << "\n\nJoin String From Vector: \n";
    cout << clsString::JoinString(vString1, " ");


    string arrString[] = { "Islam","Rahma","Salman","Khair" };

    cout << "\n\nJoin String From array: \n";
    cout << clsString::JoinString(arrString, 4, " ");

    //----------------

    String3.Value = "Islam Mhd Faraj";
    cout << "\n\nString     = " << String3.Value;

    String3.ReverseWordsInString();
    cout << "\nReverse Words : " << String3.Value
        << endl;

    //---------------

    String3.Value = "Islam Mhd Faraj";
    cout << "\nReplace : " << String3.ReplaceWord("Islam", "Rahma")
        << endl;

    //---------------

    String3.Value = "This is: a sample text, with punctuations.";
    cout << "\n\nString     = " << String3.Value;

    String3.RemovePunctuations();
    cout << "\nRemove Punctuations : " << String3.Value
        << endl;

    //---------------
    system("pause>0");
    return 0;
};
