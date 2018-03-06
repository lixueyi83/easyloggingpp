#include "easylogging++.h"

INITIALIZE_EASYLOGGINGPP

int main(int argc, char* argv[]) 
{
    el::Configurations conf("el.conf"); /* Load configuration from file */
    el::Loggers::reconfigureLogger("default", conf);  /* Reconfigure single logger */
    el::Loggers::reconfigureAllLoggers(conf);  /* Actually reconfigure all loggers instead */
    
    /* Now all the loggers will use configuration from file */
    
    LOG(TRACE) << "My first info log using default logger";
    LOG(INFO) << "My first info log using default logger";
    LOG(DEBUG) << "My first info log using default logger";
    LOG(ERROR) << "My first info log using default logger";
    LOG(WARNING) << "My first info log using default logger";
    //LOG(FATAL) << "My first info log using default logger"; 
    
    /* only when check operation failed, there is message output */
    CHECK(1);
    CHECK_EQ(1, 1);
    CHECK_NE(0, 1);
    
    
    
    LOG(TRACE) << " *** end of main *** ";
    return 0;
}
