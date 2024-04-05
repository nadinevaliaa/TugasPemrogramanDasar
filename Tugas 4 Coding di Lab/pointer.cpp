#include <iostream>
using namespace std;

void add_score(int& current_score, int increment) {
    current_score += increment;
}

int main() {
    int score = 0;

    add_score(score, 5);
    add_score(score, 10);
    add_score(score, 15);
    add_score(score, 20);
    add_score(score, 25);
    add_score(score, 30);


    cout << "score sebelum diubah : 0" << endl;
    cout << "score diubah ke : 5" << endl;
    cout << "score diubah ke : 10" << endl;
    cout << "score diubah ke : 15" << endl;
    cout << "score diubah ke : 20" << endl;
    cout << "score diubah ke : 25" << endl;
    cout << "score diubah ke : 30" << endl;
    cout << "score setelah diubah : " << 30 << endl;

    return 0;
}