#include <iostream>
#include <string>
using namespace std;

class ProgramArchive {
private:
    string programName;
    string operatingSystem;
    double programSize;
    string note;

public:
    ProgramArchive(const string& name, const string& os, double size, const string& note)
        : programName(name), operatingSystem(os), programSize(size), note(note) {}

    void displayInformation() {
        cout << "Program Name: " << programName << endl;
        cout << "Operating System: " << operatingSystem << endl;
        cout << "Program Size: " << programSize << " GB" << endl;
        cout << "Note: " << note << endl;
    }
};
int main() {
    ProgramArchive program1("Telegram", "Android", 0.6, "Messaging app");
    ProgramArchive program2("Xcode", " macOS, Linux", 0.3, "Code editor");

   cout << "Program 1:" << endl;
    program1.displayInformation();
    cout << endl;
    
    cout << "Program 2:" << endl;
    program2.displayInformation();

    return 0;
}

