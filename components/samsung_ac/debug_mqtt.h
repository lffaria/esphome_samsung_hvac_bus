/* #pragma once

#include <string>

namespace esphome
{
    namespace samsung_ac
    {
        bool debug_mqtt_connected();
        void debug_mqtt_connect(const std::string &host, const uint16_t port, const std::string &username, const std::string &password);
        bool debug_mqtt_publish(const std::string &topic, const std::string &payload);
    } // namespace samsung_ac
} // namespace esphome */

#pragma once
#include <string>

inline bool debug_mqtt_connected() { return false; }

inline void debug_mqtt_connect(const std::string &, const uint16_t,
                               const std::string &, const std::string &) {}

inline bool debug_mqtt_publish(const std::string &, const std::string &) {
    return false;
}
