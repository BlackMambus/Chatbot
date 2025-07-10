#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Convert string to lowercase for easier comparison
string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

// Basic chatbot logic
string getResponse(const string& input) {
    string msg = toLower(input);

    if (msg.find("hello") != string::npos || msg.find("hi") != string::npos)
        return "Hello! How can I assist you today?";
    else if (msg.find("how are you") != string::npos)
        return "I'm just a bunch of code, but I'm doing great!";
    else if (msg.find("your name") != string::npos)
        return "I'm ChatBot++ — your C++ companion!";
    else if (msg.find("bye") != string::npos)
        return "Goodbye! Have a great day!";
    else if (msg.find("help") != string::npos)
        return "You can ask me about the weather, time, or just chat!";
    else
        return "I'm not sure how to respond to that. Try asking something else!";
}

int main() {
    string userInput;

    cout << "🤖 ChatBot++: Hello! Type 'bye' to exit.\n";

    while (true) {
        cout << "You: ";
        getline(cin, userInput);

        if (toLower(userInput) == "bye") {
            cout << "🤖 ChatBot++: " << getResponse(userInput) << endl;
            break;
        }

        string response = getResponse(userInput);
        cout << "🤖 ChatBot++: " << response << endl;
    }

    return 0;
}
