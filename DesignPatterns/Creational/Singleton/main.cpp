#include <iostream>
#include "DatabaseConnection.hpp"
#include "Singleton.h"
using namespace std;

void ThreadFoo(){
    this_thread::sleep_for(chrono::milliseconds(1000));
    Singleton *singleton = Singleton::GetInstance("FOO");
    cout << singleton->value() << endl;
}

void ThreadBar(){
    this_thread::sleep_for(chrono::milliseconds(1000));
    Singleton *singleton = Singleton::GetInstance("Bar");
    cout << singleton->value() << endl;
}

int main(int argc, const char * argv[]) {
    /*LazyLoading::DatabaseConnection *db1 = LazyLoading::DatabaseConnection::getDatabaseConnection();
    cout<<"Lazy Loading / single Threaed Singleton 1:: "<<db1<<endl;
    LazyLoading::DatabaseConnection *db2 = LazyLoading::DatabaseConnection::getDatabaseConnection();
    cout<<"Lazy Loading / single Threaed Singleton 2:: "<<db2<<endl;

    EarlyLoading::DatabaseConnection *db3 = EarlyLoading::DatabaseConnection::getDatabaseConnection();
    cout<<"Early Loading Singleton 1:: "<<db3<<endl;
    EarlyLoading::DatabaseConnection *db4 = EarlyLoading::DatabaseConnection::getDatabaseConnection();
    cout<<"Early Loading Singleton 2:: "<<db4<<endl;
    
    DoubleCheckLoading::DatabaseConnection *db5 = DoubleCheckLoading::DatabaseConnection::getDatabaseConnection();
    cout<<"Double Checking Loading Singleton 1:: "<<db5<<endl;
    DoubleCheckLoading::DatabaseConnection *db6 = DoubleCheckLoading::DatabaseConnection::getDatabaseConnection();
    cout<<"Double Checking Loading Singleton 2:: "<<db6<<endl;*/
    
    thread t1(ThreadFoo);
    thread t2(ThreadBar);

    t1.join();
    t2.join();
    
    return 0;
}
