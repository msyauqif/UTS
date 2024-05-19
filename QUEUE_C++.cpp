// queue Lparak

#include <iostream>
#include <queue>
using namespace std;

    void showq(queue<int> gq)
    {
    queue<int> g = gq;
    while (!g.empty()) {
		cout << '\t' << g.front();
		g.pop();
			}
			cout << '\n';
    }
int main() {
    // Enqueue
    queue<int> antrian;
    antrian.push(12);
    antrian.push(22);
    antrian.push(32);
    antrian.push(42);

    cout << "The Queue gquix is: ";
	showq(antrian);
    // Front
    cout << "Front: " << antrian.front() << endl;
    // Size
    cout << "Size: " << antrian.size() << endl;
    // back
	cout << "back() : " << antrian.back() << endl;
    // pop
	cout << "pop() : ";
    antrian.pop();
    showq(antrian);
    return 0;
}
