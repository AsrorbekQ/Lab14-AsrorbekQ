#include <iostream>
#include "set"
#include "string"
#include <map>
using namespace std;
void show(const string& s);

void displayMap(auto maps){
    cout << "***************" << endl;
    for(auto planet:maps){
        cout << planet.first << " planet " << planet.second << "th order" << endl;
    }
    cout << "***************" << endl;
}
int main(){

    cout << "Probelm 1\n";\
    map<int,int>m = {pair(1,1), pair(2,4), pair(3,9), pair(4,16), pair(5,25)};
    cout << "Elements in map: " << endl;
    for(auto pam : m){
        cout << "[ " << pam.first << ", " << pam.second << " ]" << endl;
    }
    cout << endl;
    for(auto pam : m){
        cout << "Square of " << pam.first << " is " << pam.second << endl;
    }


    cout << "Probelm 2\n";
    map<int, string>math = {pair(1, "David"), pair(2, "Indira"), pair(3, "Elena"), pair(4, "Mike"), pair(5, "George")};


    for (auto competition : math){
        cout << competition.first << " place is " << competition.second << endl;
    }

    cout << "Probelm 3\n";
    map<char, int>alphabet = {};

    for (int i = 1; i < 27; i++) {
        alphabet.insert(pair(char(64 + i), i));
    }

    char letter;
    cout << "Input a character: ";
    cin >> letter;

    auto location_of_letter = alphabet.find(letter);

    if (alphabet.find(letter) != alphabet.end()) {
        cout << "Position of " << letter << " is " << location_of_letter->second << endl;
    }

    cout << "Probelm 4\n";
    map<double, double>mapper = {pair(4,7.5), pair(25,6.01), pair(-9,3.2), pair(12,5.16)};

    for (auto peyir : mapper){
        cout << peyir.first << " and " << peyir.second << endl;
    }
    cout << endl;

    mapper.insert(pair(3, 3.75));

    for (auto peyir : mapper){
        cout << peyir.first << " and " << peyir.second << endl;
    }
    cout << endl;

    mapper.insert(pair(-10, 4.3));

    for (auto peyir : mapper){
        cout << peyir.first << " and " << peyir.second << endl;
    }
    cout << endl;

    auto it = mapper.find(12);
    cout << it->second << "\n" << endl;

    mapper.erase(it);

    for (auto peyir : mapper){
        cout << peyir.first << " and " << peyir.second << endl;
    }
    cout << endl;

    auto itter = mapper.find(-9);
    it->second = 4.44;

    for (auto peyir : mapper){
        cout << peyir.first << " and " << peyir.second << endl;
    }
    cout << endl;



    cout << "Pronlem 5\n";
    map<string, int> map5 = {pair("Earth", 3),pair("Mercury", 1), pair("Venus", 2)};

    displayMap(map5);

    map5.insert(pair("Mars", 4));

    displayMap(map5);

    auto loc = map5.begin();
    loc++;
    loc++;

    map5.emplace_hint(loc, "Saturn", 6);

    map5.emplace_hint(loc, "Neptune", 8);

    displayMap(map5);






    return 0;
}

void show(const string& s)
{
    cout << s << " ";
}
