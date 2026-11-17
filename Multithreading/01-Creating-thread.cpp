#include <iostream>
#include <thread>

using namespace std;

void task(){
    cout << "==== TASK THREAD ====" << endl;
}

int main(){
    thread t(task);

    t.join();

    cout << "Main Thread Finished!" << endl;

    return 0;
}