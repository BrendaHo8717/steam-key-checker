// checker.cpp — part of steam-key-checker.

#include "steamkeychecker/checker.h"

#include <cstdio>

namespace steamkeychecker {

Checker::Checker(const std::string& config_path)
    : config_path_(config_path) {}

void Checker::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Checker::run() {
    if (verbose_) std::fprintf(stderr, "[steam-key-checker] checker: run\n");
    // core logic lives here
    return true;
}

}  // namespace steamkeychecker
