#include <mu_coin/mu_coin.hpp>
#include <boost/property_tree/ptree.hpp>

namespace mu_coin_daemon
{
    class daemon
    {
    public:
        daemon (std::string const &);
        void run ();
        std::string path;
    };
    class daemon_config
    {
    public:
        daemon_config ();
        bool deserialize (std::istream &);
        void serialize (std::ostream &);
        uint16_t peering_port;
        uint16_t rpc_port;
    };
}