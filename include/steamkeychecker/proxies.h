// proxies — part of steam-key-checker.

#pragma once

#include <string>
#include <vector>

namespace steamkeychecker {

class Proxies {
public:
    explicit Proxies(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace steamkeychecker
