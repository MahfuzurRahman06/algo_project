
#include <bits/stdc++.h>

using namespace std;

// Game Settings
const int TOTAL_QUESTIONS = 10;
const int CORRECT_POINTS = 10;
const int WRONG_PENALTY = 5;
const int WINNING_SCORE = 60;

// Question Structure
struct Question {
    int num1;
    int num2;
    char op;
    int answer;
};

// Player Structure
struct PlayerRecord {
    string name;
    int score;
    int correct;
    int wrong;
};
// Coded by Mahfuz from here
// Global Variables
mt19937 rng(random_device{}());

vector<PlayerRecord> leaderboard;

// Generate Random Number
int randomInt(int low, int high) {
    uniform_int_distribution<int> dist(low, high);
    return dist(rng);

}

// Input Validation
int readInteger() {
    int value;

    while (!(cin >> value)) {
        cout << "Invalid input! Enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return value;

}

// Generate Question
Question generateQuestion(int difficulty) {
    int low, high;

    if (difficulty == 1) {
        low = 1;
        high = 10;
    }
    else if (difficulty == 2) {
        low = 10;
        high = 50;
    }
    else {
        low = 20;
        high = 100;
    }

    Question q;

    q.op = "+-*/"[randomInt(0, 3)];

    q.num1 = randomInt(low, high);
    q.num2 = randomInt(low, high);

    if (q.op == '+') {
        q.answer = q.num1 + q.num2;
    }
    else if (q.op == '-') {

        if (q.num1 < q.num2) {
            swap(q.num1, q.num2);
        }

        q.answer = q.num1 - q.num2;
    }
    else if (q.op == '*') {
        q.answer = q.num1 * q.num2;
    }
    else {
        // Exact Division
        q.num2 = randomInt(1, high);
        q.answer = randomInt(1, high);
        q.num1 = q.num2 * q.answer;
    }

    return q;

}


// Coded by Wasi from here 
// Merge Function
void merge(vector<PlayerRecord>& arr, int left, int mid, int right) {
    
}
// Merge Sort
void mergeSort(vector<PlayerRecord>& arr, int left, int right) {
    
}

// Linear Search
int linearSearch(const vector<PlayerRecord>& arr, string target) {
    
}

// Show Instructions
void showInstructions() {
    
}


//Coded by Riyad from here 
// Play Game
void playGame() {
    
}
// Show Leaderboard
void showLeaderboard() {
    
}


//Coded by Tahmid from here
// Main Menu
void showMenu() {
    
}

// Main Function
int main() {

    showMenu();

    return 0;
}
