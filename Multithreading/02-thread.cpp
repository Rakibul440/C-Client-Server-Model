#include <iostream>
#include <thread>
#include <chrono>

using namespace std;


void task1(){
    cout << "Thread 1 is running. ID : " << this_thread::get_id() << "\n";
}

void task2(){
    cout << "Thread 2 is running. ID : " << this_thread::get_id() << endl;
}

int main(){
    thread t1(task1);
    thread t2(task2);

    // get thread id
    cout << "T1 ID : " << t1.get_id() << endl;
    cout << "T2 ID : " << t2.get_id() << endl;

    // join if joinable
    if(t1.joinable()){
        t1.join();
        cout << "T1 joined" << endl;
    }

    // detatch if t2 is joinable
    if(t2.joinable()){
        t2.detach();
        cout << "T2 detached" << endl;
    }

    this_thread :: sleep_for(chrono::microseconds(100));
    cout << "Main Thread finished!\n";

    return 0;
}