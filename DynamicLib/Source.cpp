#include <string>
#include <iostream>

using namespace std;

extern "C" __declspec(dllexport) bool contains_all_chars(const char* str, const char* chars) {
    string s(str);
    bool missing = false;
    for (const char* c = chars; *c != '\0'; ++c) {
        if (s.find(*c) == string::npos) {
            missing = true;
            cout << "Character '" << *c << "' is missing in the string." << endl;
        }
    }
    return !missing;
}
