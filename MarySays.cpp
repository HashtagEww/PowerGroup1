#include <iostream>
#include <string>

using namespace std;

class MarySays {
private:
    string lastCommand;
    int gameRound;
public:
    MarySays(){
        lastCommand = "Jump in the Air";
        gameRound = 1;
    }
    MarySays(string newCommand){
        lastCommand = newCommand;
        gameRound = 1;
    }
    void sayCommands(string s){
        lastCommand = s;
        gameRound++;
    }
    void display(){
        cout << lastCommand << endl;
        cout << gameRound << endl;
        cout << "\n";
    }
};

int main(){
    MarySays testObj;
    MarySays testObj2;
    testObj.display();

    string command1;
    cout << "Please enter a command:" << endl;
    cin >> command1;
    cout << "\n";
    testObj2.sayCommands(command1);
    testObj2.display();

    string command2 = "Test1";
    string command3 = "Test2";
    string command4 = "Test3";
    testObj.sayCommands(command2);
    testObj.sayCommands(command3);
    testObj2.sayCommands(command4);
    testObj.display();
    testObj2.display();

    return 0;
}
