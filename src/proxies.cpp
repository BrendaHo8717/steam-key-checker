// proxies.cpp — part of steam-key-checker.

#include "steamkeychecker/proxies.h"

#include <cstdio>

namespace steamkeychecker {

Proxies::Proxies(const std::string& config_path)
    : config_path_(config_path) {}

void Proxies::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Proxies::run() {
    if (verbose_) std::fprintf(stderr, "[steam-key-checker] proxies: run\n");
    // core logic lives here
    return true;
}

}  // namespace steamkeychecker
