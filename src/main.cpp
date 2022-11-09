#include "webserv.hpp"
#include <iostream>
using namespace std;

int main(int ac, char **av, char **env) {
    try {
        string config_path;
        if (ac < 2) {
            config_path = "config/webserv.conf";
            cout << "Using default configuration file: " << config_path << '\n';
        } else
            config_path = av[1];
        WebServ serv(config_path, env);
        serv.run();
    } catch (exception &e) {cerr << e.what() << endl;}
    
    return 0;
}
