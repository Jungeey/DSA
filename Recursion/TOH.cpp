#include <iostream>
using namespace std;
int counter=0;
void towerOfHanoi(int n, string scr, string dest, string temp) {
    if (n == 1) {
    	counter++;
        cout <<"Step "<<counter<<". "<< "Move disk 1 from " << scr << " to " << dest<< endl;
        return;
    }
    towerOfHanoi(n - 1, scr, temp, dest);
    counter++;
    cout <<"Step "<<counter<<". "<< "Move disk " << n << " from " << scr << " to " << dest << endl;
    towerOfHanoi(n - 1, temp, dest, scr);
}

int main() {
    int num;
    cout << "Enter the number of disks: ";
    cin >> num;
    cout << "Steps to solve Tower of Hanoi with " << num << " disks:\n";
    towerOfHanoi(num, "Source", "Destination", "Temporary"); 
    return 0;
}
