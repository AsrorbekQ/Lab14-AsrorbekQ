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

    cout << "Pronlem 5\n";
    map<string, int> map5 = {pair("Earth", 3),pair("Mercury", 1), pair("Venus", 2)};

    //    for(auto planet:map5){
    //        cout << planet.first << " planet " << planet.second << "th order" << endl;
    //    }
    displayMap(map5);

    map5.insert(pair("Mars", 4));

    displayMap(map5);

    auto loc = map5.begin() + 2;

    map5.emplace_hint(loc, "Saturn", 6);

    map5.emplace_hint(loc, "Neptune", 8);

    displayMap(map5);

    return 0;
}

void show(const string& s)
{
    cout << s << " ";
}
