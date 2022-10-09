#include <stdio.h>
#include <string>
#include "Singleton.h"
using namespace std;

Singleton* Singleton::singleton = nullptr;
mutex Singleton::mutex_;

Singleton *Singleton::GetInstance(const string &value){
    lock_guard<mutex> lock(mutex_);
    if(!singleton){
        singleton = new Singleton(value);
    }
    return singleton;
}
