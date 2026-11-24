// hits.cpp — part of steam-key-checker.

#include "steamkeychecker/hits.h"

#include <cstdio>

namespace steamkeychecker {

Hits::Hits(const std::string& config_path)
    : config_path_(config_path) {}

void Hits::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Hits::run() {
    if (verbose_) std::fprintf(stderr, "[steam-key-checker] hits: run\n");
    // core logic lives here
    return true;
}

}  // namespace steamkeychecker
