#include <iostream>
using namespace std;

int main() {
    int N1, N2, N3;


    cout << "First num: \n";
    cin >> N1;


    cout << "Second num: \n";
    cin >> N2;


    cout << "Third num: \n";
    cin >> N3;

    int additional_votes1 = 0, additional_votes2 = 0, additional_votes3 = 0;


    if (N1 <= N2 || N1 <= N3) {
        additional_votes1 = max(0, max(N2, N3) - N1 + 1);
    }


    if (N2 <= N1 || N2 <= N3) {
        additional_votes2 = max(0, max(N1, N3) - N2 + 1);
    }


    if (N3 <= N1 || N3 <= N2) {
        additional_votes3 = max(0, max(N1, N2) - N3 + 1);
    }

    cout << additional_votes1 << " " << additional_votes2 << " " << additional_votes3 << endl;

    return 0;
}
