#include "DatabaseConnection.hpp"

LazyLoading::DatabaseConnection* LazyLoading::DatabaseConnection::dbConn = nullptr;
LazyLoading::DatabaseConnection* LazyLoading::DatabaseConnection::getDatabaseConnection(){
    if(!dbConn){
        dbConn = new DatabaseConnection;
    }
    return dbConn;
}


EarlyLoading::DatabaseConnection* EarlyLoading::DatabaseConnection::dbConn = new DatabaseConnection;
EarlyLoading::DatabaseConnection* EarlyLoading::DatabaseConnection::getDatabaseConnection(){
    if(!dbConn){
        dbConn = new DatabaseConnection;
    }
    return dbConn;
}

std::atomic<DoubleCheckLoading::DatabaseConnection*> DoubleCheckLoading::DatabaseConnection::dbConn = nullptr;
std::mutex DoubleCheckLoading::DatabaseConnection::mMutex;
DoubleCheckLoading::DatabaseConnection* DoubleCheckLoading::DatabaseConnection::getDatabaseConnection(){
    DoubleCheckLoading::DatabaseConnection *temp = DoubleCheckLoading::DatabaseConnection::dbConn.load();
    if(!temp){
        std::lock_guard<std::mutex> lock(mMutex);
        temp = DoubleCheckLoading::DatabaseConnection::dbConn.load();
        if(!temp){
            temp = new DoubleCheckLoading::DatabaseConnection;
            DoubleCheckLoading::DatabaseConnection::dbConn.store(temp);
        }
    }
    return temp;
}
