/*Insertion Sort Algorithm (for cards)
B24CE1103*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int cards[n];

    cout << "Enter 5 cards:\n";
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    for (int i = 1; i < n; i++) {
        int key = cards[i];
        int j = i - 1;
       
        while (j >= 0 && cards[j] > key) {
            cards[i] = cards[j];
            j--;
        }
        cards[j + 1] = key;
    }

    cout << "Sorted cards: ";
    for (int i = 0; i < n; i++) {
        cout << cards[i] << " ";
    }
    cout << endl;

    return 0;
}
