#include <iostream>
#include <string>
using namespace std;

int getValue(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int main() {

    string test = "CXI";
    int sum = 0;
    
    for(int i = 0; i < test.length(); i++) {
        int current = getValue(test[i]);
        if(i + 1 < test.length()) {
            int next = getValue(test[i + 1]);
            
            if(current < next) {

                sum += (next - current);
                i++;
                continue;
            }
        }
        sum += current;
    }

    cout << sum << endl;
    return 0;
}
