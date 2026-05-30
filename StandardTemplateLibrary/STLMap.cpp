#include<iostream>
#include<unordered_map> // Key-Value Pair <K, V>
using namespace std;

int main(){
    unordered_map<string, string> stateLanguages;
    stateLanguages.insert(pair<string, string>("Karnataka", "Kannada"));
    stateLanguages.insert(pair<string, string>("Maharashtra", "Marathi"));
    stateLanguages.insert(pair<string, string>("Goa", "Konkani"));
    stateLanguages.insert(pair<string, string>("West Bengal", "Bengali"));
    stateLanguages.insert(pair<string, string>("Assam", "Assamese"));
    // Inserting a new Key-Value Pair
    // map["Key"] = "Value";
    stateLanguages["Kerala"] = "Malayalam";
    // Clear all the data inside the map
    // stateLanguages.clear(); // Deletes Everything
    // Delete a particular key-value pair
    //stateLanguages.erase("Goa");
    // Traversal of the map
    for(auto data : stateLanguages){
        cout<< "State: " << data.first << ", Language: " << data.second <<endl;
    }
    return 0;
}