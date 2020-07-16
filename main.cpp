#include "Stack.h"

int main() {
    Stack<int> s;
    for (int i = 0; i < 10; ++i) {
        cout << "\tPushing " << i + 1 << "...\n";
        s.push(i+1);
    }
    cout << "\n";
    for (int i = 0; i < 10; ++i) {
        cout << "\tPoping " << s.peek() << "...\n";
        s.pop();
    }
    return 0;
}
