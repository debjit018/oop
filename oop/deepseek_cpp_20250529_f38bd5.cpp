#include <iostream>
using namespace std;

class Writer {
public:
    void show_role() {
        cout << "I am a writer." << endl;
    }
};

class Editor {
public:
    void show_role() {
        cout << "I am an editor." << endl;
    }
};

class ContentCreator : public Writer, public Editor {
public:
    void show_role() {
        Writer::show_role();
        Editor::show_role();
        cout << "I am a content creator." << endl;
    }
};

int main() {
    ContentCreator creator;
    creator.show_role();
    return 0;
}