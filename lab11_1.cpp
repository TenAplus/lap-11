// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    string press,grade;
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
        int x = rand()%9;
        if(x == 0) grade = "A";
        else if (x == 1) grade = "B+";
        else if (x == 2) grade = "B";
        else if (x == 3) grade = "C+";
        else if (x == 4) grade = "C";
        else if (x == 5) grade = "D+";
        else if (x == 6) grade = "D";
        else if (x == 7) grade = "F";
        else grade = "W";
        cout << "You will get " << grade << " in this 261102.";
    

}
