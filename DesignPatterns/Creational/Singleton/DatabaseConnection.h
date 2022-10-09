#ifndef DatabaseConnection_hpp
#define DatabaseConnection_hpp

#include <stdio.h>
#include <thread>
#include <mutex>
namespace LazyLoading{
    class DatabaseConnection{
        static DatabaseConnection* dbConn;
        DatabaseConnection(){}
    public:
        static DatabaseConnection* getDatabaseConnection();
    };
}

namespace EarlyLoading{
    class DatabaseConnection{
        static DatabaseConnection* dbConn;
        DatabaseConnection(){}
    public:
        static DatabaseConnection* getDatabaseConnection();
    };
}

namespace DoubleCheckLoading{
    class DatabaseConnection{
        static std::atomic<DatabaseConnection*> dbConn;
        static std::mutex mMutex;
        DatabaseConnection(){}
    public:
        static DatabaseConnection* getDatabaseConnection();
    };
}
#endif /* DatabaseConnection_hpp */
