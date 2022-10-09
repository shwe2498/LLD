#ifndef Singleton_h
#define Singleton_h

#include <string>
#include <mutex>
using namespace std;

class Singleton{
protected:
    Singleton(const string value):val(value){}
    static Singleton* singleton;
    static mutex mutex_;
    string val;
    
public:
    Singleton(Singleton& other) = delete;
    void operator=(const Singleton &) = delete;
    static Singleton* GetInstance(const string &value);
    string value() const {
        return val;
    }
};

#endif /* Singleton_h */
