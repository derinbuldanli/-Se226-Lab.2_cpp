#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> words = {"each","early","east","easy","eat","economic","economy","edge","education","effect","effort","eight","either","election","else","employee","end","energy","enjoy","enough","enter","entire","environment","environmental","especially","establish","even","evening","event","ever","every","everybody","everyone","everything","evidence","exactly","example","executive","exist","expect","experience","expert","explain","eye","hair","half","hand","hang","happen","happy","hard","have","he","head","health","hear","heart","heat","heavy","help","her","here","herself","high"};

    cout << "The words starting with letter 'e':" << endl;
    for (string word : words) {
        if (word[0] == 'e') {
            cout << word << endl;
        }
    }

    cout << "The words starting with 'ha' :" << endl;
    for (string word : words) {
        if (word.substr(0, 2) == "ha") {
            cout << word << endl;
        }
    }

    int number;
    cout << "Enter a number between 3 and 9: ";
    cin >> number;

    if (number < 3 || number > 9) {
        cout << "Invalid input!" << endl;
    } else {
        for (int x = 0; x <= number; x++) {
               cout<< x * '*' <<
            for (int x = number-1; x > 0; x--) {
                cout << x * "*";
            }
            break;
        }
        }
    }
    return 0;
}
}

