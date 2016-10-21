
#include "../Socket.hpp"

using namespace std;

#define IP   "10.166.15.17"
#define PORT 10000

int main(int argc, char* argv[])
{
    try
    {
        if(argc == 2)
        {
            string fileName  = argv[1];
        }
        else
            filename = "empty";
        Socket::TCP server;
        server.connect_to(Socket::Address(IP, PORT));
        
        cout << "sending ..." << endl;
        server.send_file(fileName);
    }
    catch (Socket::SocketException &e)
    {
        cout << e << endl;
    }
    
    return 0;
}
